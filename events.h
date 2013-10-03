/*-------------------------------------------------------------------------
 *
 * events.h
 *    Declarations for event-handling functions.
 *
 *
 * pg_schema_triggers/events.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef SCHEMA_TRIGGERS_EVENTS_H
#define SCHEMA_TRIGGERS_EVENTS_H


#include "postgres.h"
#include "fmgr.h"


void listen_event(const char *condition_name);

void relation_create_event(ObjectAddress *rel);
Datum relation_create_eventinfo(PG_FUNCTION_ARGS);

void relation_alter_event(ObjectAddress *rel);
Datum relation_alter_eventinfo(PG_FUNCTION_ARGS);

void relation_drop_event(ObjectAddress *rel);
Datum relation_drop_eventinfo(PG_FUNCTION_ARGS);


#endif	/* SCHEMA_TRIGGERS_EVENTS_H */
