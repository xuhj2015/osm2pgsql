#ifndef OSM2PGSQL_DB_CHECK_HPP
#define OSM2PGSQL_DB_CHECK_HPP

/**
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This file is part of osm2pgsql (https://osm2pgsql.org/).
 *
 * Copyright (C) 2006-2020 by the osm2pgsql developer community.
 * For a full list of authors see the git log.
 */

#include "options.hpp"

/**
 * Get settings from the database and check that minimum requirements for
 * osm2pgsql are met. This also prints the database version.
 */
void check_db(options_t const &options);

#endif // OSM2PGSQL_DB_CHECK_HPP
