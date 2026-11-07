// FUN_01110ec4 @ 01110ec4 size=276 calls_out=2 calls_in=16
// strings: 

void FUN_01110ec4(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  
  cVar4 = DAT_018dd942;
  bVar6 = true;
  do {
    if (DAT_018dd942 != '\0') goto LAB_01110ef4;
    bVar1 = (bool)hasExclusiveAccess(0x18dd942);
  } while (!bVar1);
  DAT_018dd942 = '\x01';
LAB_01110efc:
  while (cVar2 = DAT_018dd942, DataMemoryBarrier(0xb), !bVar6) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar4) {
    case '\0':
switchD_01110f10_caseD_0:
      do {
        if (DAT_018dd942 != '\0') goto LAB_01110ef4;
        bVar6 = true;
        bVar1 = (bool)hasExclusiveAccess(0x18dd942);
      } while (!bVar1);
      DAT_018dd942 = '\x01';
      cVar4 = cVar2;
      break;
    case '\x01':
      do {
        DataMemoryBarrier(0xb);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(DAT_018dd942) {
        case '\0':
          goto switchD_01110f10_caseD_0;
        case '\x01':
          HintYield();
          break;
        case '\x02':
          goto switchD_01110f10_caseD_2;
        case '\x03':
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0040f7b6,0x26,&DAT_018aa5d8);
        }
      } while( true );
    case '\x02':
      goto switchD_01110f10_caseD_2;
    case '\x03':
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0040f7a9,0xd,&DAT_018aa5c8);
    }
  }
  uVar3 = FUN_016d636c(0x10);
  uVar5 = 0;
  if ((uVar3 & 0x1000) != 0) {
    uVar3 = FUN_016d636c(0x1a);
    uVar5 = 5;
    if ((uVar3 & 1) == 0) {
      uVar5 = 1;
    }
    uVar5 = (uVar3 & 8) << 1 | (uVar3 & 2) << 4 | uVar5;
  }
  DataMemoryBarrier(0xb);
  DAT_018dd942 = '\x02';
  DAT_018dffd8 = uVar5;
switchD_01110f10_caseD_2:
  return;
LAB_01110ef4:
  bVar6 = false;
  ClearExclusiveLocal();
  cVar4 = DAT_018dd942;
  goto LAB_01110efc;
}

