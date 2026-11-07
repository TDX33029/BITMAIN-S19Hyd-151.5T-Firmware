// FUN_01259514 @ 01259514 size=96 calls_out=1 calls_in=2
// strings: Testboard braiins 1362-1x1 | Braiins Mini POC 1362-4x1 | Braiins Mini Miner BMM 100 | Braiins Mini Miner BMM 101 | Testboard braiins 1366-1x1

void FUN_01259514(undefined1 param_1,undefined4 param_2)

{
  char *pcVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    pcVar1 = "Testboard braiins 1362-1x1";
    break;
  case 1:
    pcVar1 = "Testboard braiins 1366-1x1";
    break;
  case 2:
    pcVar1 = "Braiins Mini Miner BMM 100";
    break;
  case 3:
    pcVar1 = "Braiins Mini Miner BMM 101";
    break;
  case 4:
    FUN_012fb940(param_2,"Braiins Mini POC 1362-4x1",0x19);
    return;
  }
  FUN_012fb940(param_2,pcVar1,0x1a);
  return;
}

