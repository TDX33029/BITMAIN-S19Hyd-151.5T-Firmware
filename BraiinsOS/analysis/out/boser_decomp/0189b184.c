// FUN_0189b184 @ 0189b184 size=468 calls_out=8 calls_in=2
// strings: 

void FUN_0189b184(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint local_11c;
  uint local_118 [61];
  
  if (param_3 < param_4) {
    puVar3 = &DAT_01d21e3c;
LAB_0189b310:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_4,param_3,param_3,puVar3);
  }
  uVar4 = param_3 - param_4;
  local_11c = uVar4 & 0xf;
  if (local_11c != 0) {
    puVar2 = &local_11c;
LAB_0189b334:
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,puVar2,&DAT_00533278,0);
  }
  iVar5 = param_2 + param_4;
  uVar1 = 1;
  if ((DAT_01d53480 & 4) == 0) {
    uVar1 = DAT_01d53480 & 1 ^ 3;
  }
  if (uVar1 == 1) {
    FUN_01bd8f80(iVar5,param_2,uVar4 >> 4,param_1,param_5);
  }
  else if (uVar1 == 2) {
    if (0x7f < uVar4) {
      FUN_01bed93e(local_118,0,0xf4);
      FUN_01bda480(local_118,param_1);
      if ((uVar4 & 0x40) == 0) {
        uVar4 = uVar4 & 0x7fffff80;
      }
      if (param_3 < uVar4 + param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar4 + param_4,param_3,&DAT_01d21e4c);
      }
      FUN_01bd9c80(iVar5,param_2,uVar4 >> 4,local_118,param_5);
      uVar1 = *(uint *)(param_5 + 0xc);
      param_2 = param_2 + uVar4;
      param_3 = param_3 - uVar4;
      uVar4 = (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
              uVar1 >> 0x18) + (uVar4 >> 4);
      *(uint *)(param_5 + 0xc) =
           uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
           uVar4 >> 0x18;
    }
    if (param_3 < param_4) {
      puVar3 = &DAT_01d21e1c;
      goto LAB_0189b310;
    }
    uVar4 = param_3 - param_4;
    local_118[0] = uVar4 & 0xf;
    if (local_118[0] != 0) {
      puVar2 = local_118;
      goto LAB_0189b334;
    }
    FUN_01bda540(param_2 + param_4,param_2,uVar4 >> 4,param_1,param_5);
  }
  else {
    FUN_01bcf684(iVar5,param_2,uVar4 >> 4,param_1,param_5);
  }
  uVar1 = *(uint *)(param_5 + 0xc);
  uVar4 = (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18
          ) + (uVar4 >> 4);
  *(uint *)(param_5 + 0xc) =
       uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
  ;
  return;
}

