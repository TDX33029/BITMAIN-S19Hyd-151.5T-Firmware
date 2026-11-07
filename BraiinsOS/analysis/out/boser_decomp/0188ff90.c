// FUN_0188ff90 @ 0188ff90 size=276 calls_out=2 calls_in=26
// strings: 

undefined * FUN_0188ff90(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  cVar3 = DAT_01d51afc;
  bVar5 = true;
  do {
    if (DAT_01d51afc != '\0') goto LAB_0188ffbc;
    bVar1 = (bool)hasExclusiveAccess(0x1d51afc);
  } while (!bVar1);
  DAT_01d51afc = '\x01';
LAB_0188ffc4:
  while (cVar2 = DAT_01d51afc, DataMemoryBarrier(0xb), !bVar5) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar3) {
    case '\0':
switchD_0188ffd8_caseD_0:
      do {
        if (DAT_01d51afc != '\0') goto LAB_0188ffbc;
        bVar5 = true;
        bVar1 = (bool)hasExclusiveAccess(0x1d51afc);
      } while (!bVar1);
      DAT_01d51afc = '\x01';
      cVar3 = cVar2;
      break;
    case '\x01':
      do {
        DataMemoryBarrier(0xb);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(DAT_01d51afc) {
        case '\0':
          goto switchD_0188ffd8_caseD_0;
        case '\x01':
          HintYield();
          break;
        case '\x02':
          goto switchD_0188ffd8_caseD_2;
        case '\x03':
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_0051d37d,0x26,&DAT_01d214fc);
        }
      } while( true );
    case '\x02':
      goto switchD_0188ffd8_caseD_2;
    case '\x03':
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_0051d370,0xd,&DAT_01d214ec);
    }
  }
  uVar4 = FUN_01be65d0(0x10);
  uVar6 = 0;
  if ((uVar4 & 0x1000) != 0) {
    uVar4 = FUN_01be65d0(0x1a);
    uVar6 = 5;
    if ((uVar4 & 1) == 0) {
      uVar6 = 1;
    }
    uVar6 = (uVar4 & 8) << 1 | (uVar4 & 2) << 4 | uVar6;
  }
  DataMemoryBarrier(0xb);
  DAT_01d51afc = '\x02';
  DAT_01d53480 = uVar6;
switchD_0188ffd8_caseD_2:
  return &DAT_01d51afd;
LAB_0188ffbc:
  bVar5 = false;
  ClearExclusiveLocal();
  cVar3 = DAT_01d51afc;
  goto LAB_0188ffc4;
}

