// FUN_0157d5d8 @ 0157d5d8 size=444 calls_out=5 calls_in=1
// strings: 

void FUN_0157d5d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  bVar3 = FUN_01596fc0(param_2,param_3);
  if (bVar3 == 0) {
    do {
      iVar4 = *param_4;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x157d7c4);
      (*pcVar1)();
    }
    uVar7 = FUN_015321a0();
    puVar5 = (undefined *)FUN_01594754(param_4,param_5,param_4,param_5,uVar7,param_6,&DAT_004a68c8);
    puVar6 = (undefined4 *)0x0;
  }
  else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1
                                   | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1)
                                 << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18)) {
    case 0:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc088;
      break;
    case 1:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc108;
      break;
    case 2:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc128;
      break;
    case 3:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc068;
      break;
    case 4:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc0a8;
      break;
    case 5:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc0c8;
      break;
    case 6:
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      puVar5 = &DAT_01cfc0e8;
    }
    *puVar6 = param_4;
    puVar6[1] = param_5;
  }
  *param_1 = puVar6;
  param_1[1] = puVar5;
  return;
}

