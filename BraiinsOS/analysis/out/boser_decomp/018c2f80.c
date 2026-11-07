// FUN_018c2f80 @ 018c2f80 size=500 calls_out=7 calls_in=2
// strings: message buffer full

void FUN_018c2f80(uint *param_1,int param_2,undefined4 param_3,code *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_28;
  uint local_24;
  
  if ((*(int *)(param_2 + 0x30) == 1) &&
     (uVar4 = *(uint *)(param_2 + 0x34), uVar2 = FUN_018dfe9c(), uVar4 < uVar2)) {
    FUN_019a18a8(param_1,0x28,&DAT_00523660,0x1e);
    return;
  }
  uVar2 = 0xffff;
  uVar4 = *(uint *)(param_2 + 0x104);
  if (*(int *)(param_2 + 200) == 2) {
    uVar2 = 0x4805;
  }
  if (uVar4 < uVar2) {
    puVar6 = (uint *)(param_2 + 0xe8);
    uVar5 = uVar4 + 0x1000;
    if (uVar2 <= uVar4 + 0x1000) {
      uVar5 = uVar2;
    }
    if (*(uint *)(param_2 + 0xf0) < uVar5) {
      FUN_018a7a68(puVar6,uVar5,0);
    }
    else if ((uVar4 == 0) || (uVar2 < *(uint *)(param_2 + 0xf0))) {
      FUN_018a7a68(puVar6,uVar5,0);
      if (uVar5 < *puVar6) {
        uVar2 = *(uint *)(param_2 + 0xf0);
        if (*puVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0052ce40,0x49,&DAT_01d2bbc0);
        }
        if (uVar2 < uVar5) {
          uVar2 = uVar5;
        }
        iVar3 = FUN_0189452c(puVar6,uVar2,1,1);
        if (iVar3 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620();
        }
      }
    }
    uVar2 = *(uint *)(param_2 + 0xf0);
    uVar4 = *(uint *)(param_2 + 0x104);
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar4,uVar2,uVar2,&DAT_01d22990);
    }
    (*param_4)(&local_28,param_3,*(int *)(param_2 + 0xec) + uVar4,uVar2 - uVar4);
    if (((char)local_28 != '\x04') && ((local_28 & 0xff) != 4)) goto LAB_018c3128;
    *(uint *)(param_2 + 0x104) = uVar4 + local_24;
    local_28 = CONCAT31(local_28._1_3_,4);
    bVar1 = true;
  }
  else {
    FUN_019a18a8(&local_28,0x15,"message buffer full",0x13);
    bVar1 = (char)local_28 == '\x04';
  }
  if ((bVar1) && (local_24 == 0)) {
    *(undefined1 *)(param_2 + 0xb3) = 1;
  }
LAB_018c3128:
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}

