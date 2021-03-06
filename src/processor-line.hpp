#ifndef OSM2PGSQL_PROCESSOR_LINE_HPP
#define OSM2PGSQL_PROCESSOR_LINE_HPP

/**
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This file is part of osm2pgsql (https://osm2pgsql.org/).
 *
 * Copyright (C) 2006-2020 by the osm2pgsql developer community.
 * For a full list of authors see the git log.
 */

#include "geometry-processor.hpp"

class processor_line : public geometry_processor
{
public:
    processor_line(std::shared_ptr<reprojection> const &proj);

    wkb_t process_way(osmium::Way const &way,
                      geom::osmium_builder_t *builder) override;
    wkbs_t process_relation(osmium::Relation const &rel,
                            osmium::memory::Buffer const &ways,
                            geom::osmium_builder_t *builder) override;
};

#endif // OSM2PGSQL_PROCESSOR_LINE_HPP
