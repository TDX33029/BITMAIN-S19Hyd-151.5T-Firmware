// FUN_00eff324 @ 00eff324 size=668 calls_out=3 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00eff324(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f [9];
  undefined1 local_26;
  char local_25;
  
  uVar3 = param_1 << 3 | 2;
  iVar7 = 10;
  do {
    if (uVar3 < 0x80) {
      local_31 = (byte)uVar3;
      FUN_01284394(param_3,&local_31,1);
      break;
    }
    local_32 = (byte)uVar3 | 0x80;
    uVar3 = 1;
    FUN_01284394(param_3,&local_32,1);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar3 = FUN_00eff16c(param_2);
  iVar7 = 10;
  do {
    if (uVar3 >> 7 == 0) {
      local_2f[0] = (byte)uVar3;
      FUN_01284394(param_3,local_2f,1);
      uVar4 = extraout_r1_00;
      break;
    }
    local_30 = (byte)uVar3 | 0x80;
    FUN_01284394(param_3,&local_30,1);
    iVar7 = iVar7 + -1;
    uVar3 = uVar3 >> 7;
    uVar4 = extraout_r1;
  } while (iVar7 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((char)param_2[0xc]) {
  case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*param_2 & 1) != 0) {
    FUN_00efc900(5,uVar4,param_2[2],param_2[3],param_2[4],param_3);
  }
  uVar3 = param_2[6];
  uVar5 = param_2[7];
  if (uVar3 != 3 || uVar5 != 0) {
    local_26 = 0x32;
    FUN_01284394(param_3,&local_26,1);
    if (uVar3 == 2 && uVar5 == 0) {
      local_25 = '\0';
      FUN_01284394(param_3,&local_25,1);
    }
    else {
      uVar6 = param_2[8];
      uVar5 = param_2[9];
      if ((uVar3 & 1) == 0) {
        cVar2 = '\0';
        local_25 = '\0';
        if (uVar6 != 0 || uVar5 != 0) {
          uVar3 = LZCOUNT(uVar6 | 1) | 0x20;
          if (uVar5 != 0) {
            uVar3 = LZCOUNT(uVar5);
          }
          cVar2 = (char)((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
        }
        uVar3 = param_2[10];
        if (uVar3 != 0) {
          uVar1 = LZCOUNT(uVar3 | 1) | 0x20;
          if ((int)uVar3 < 0) {
            uVar1 = LZCOUNT((int)uVar3 >> 0x1f);
          }
          local_25 = (char)((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
        }
        local_25 = local_25 + cVar2;
        uVar4 = 1;
      }
      else {
        cVar2 = '\0';
        local_25 = '\0';
        if (uVar6 != 0 || uVar5 != 0) {
          uVar3 = LZCOUNT(uVar6 | 1) | 0x20;
          if (uVar5 != 0) {
            uVar3 = LZCOUNT(uVar5);
          }
          cVar2 = (char)((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
        }
        uVar3 = param_2[10];
        if (uVar3 != 0) {
          uVar1 = LZCOUNT(uVar3 | 1) | 0x20;
          if ((int)uVar3 < 0) {
            uVar1 = LZCOUNT((int)uVar3 >> 0x1f);
          }
          local_25 = (char)((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
        }
        local_25 = local_25 + cVar2;
        uVar4 = 2;
      }
      local_25 = local_25 + '\x02';
      FUN_01284394(param_3,&local_25,1);
      FUN_00efc900(uVar4,extraout_r1_01,uVar6,uVar5,uVar3,param_3);
    }
  }
  return;
}

