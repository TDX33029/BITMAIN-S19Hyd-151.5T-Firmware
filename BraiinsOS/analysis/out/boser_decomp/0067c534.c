// FUN_0067c534 @ 0067c534 size=128 calls_out=1 calls_in=2
// strings: CGMiner | GraphQL

void FUN_0067c534(undefined1 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    pcVar1 = "CGMiner";
    goto LAB_0067c58c;
  case 1:
    puVar2 = &DAT_0056faf8;
    break;
  case 2:
    pcVar1 = "GraphQL";
LAB_0067c58c:
    FUN_012fb940(param_2,pcVar1,7);
    return;
  case 3:
    puVar2 = &DAT_0056d37c;
    break;
  case 4:
    FUN_012fb940(param_2,&DAT_00570968,8);
    return;
  case 5:
    puVar2 = &DAT_0056cfc8;
    break;
  case 6:
    puVar2 = &DAT_0056e544;
  }
  FUN_012fb940(param_2,puVar2,4);
  return;
}

