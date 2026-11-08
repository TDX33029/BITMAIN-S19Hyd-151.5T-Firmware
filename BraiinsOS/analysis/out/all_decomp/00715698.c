// FUN_00715698 @ 00715698 size=92 calls_out=1 calls_in=1
// strings: /etc/bosminer_pausedevent open/bosminer/bosminer/src/paused.rs:55

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined1 FUN_00715698(void)

{
  uint local_90 [28];
  
  FUN_015f438c(local_90,"/etc/bosminer_pausedevent open/bosminer/bosminer/src/paused.rs:55",0x14);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_90[0] & 0xff) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return DAT_018dd947;
  }
}

