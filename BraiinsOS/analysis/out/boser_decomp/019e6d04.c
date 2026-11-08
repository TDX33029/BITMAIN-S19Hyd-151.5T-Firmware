// FUN_019e6d04 @ 019e6d04 size=256 calls_out=5 calls_in=1
// strings: 

void FUN_019e6d04(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_2c [4];
  uint local_28;
  
  if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,(int *)(param_2 + 0xc),&DAT_00533278,0);
  }
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 != 0) {
    iVar4 = *(int *)(param_2 + 4);
    puVar6 = (undefined4 *)local_2c;
    do {
      uVar1 = FUN_01bf053e(*param_3,iVar4,uVar5);
      if (uVar1 == 0xffffffff) {
        puVar2 = (uint *)FUN_01be3244();
        local_2c[0] = 0;
        local_28 = *puVar2;
        if (*puVar2 != 4) goto LAB_019e6db8;
        FUN_0069603c(puVar6);
      }
      else {
        local_28 = uVar1;
        local_2c[0] = 4;
        if (uVar1 == 0) {
          puVar6 = &DAT_01d2e7c8;
LAB_019e6db8:
          uVar3 = puVar6[1];
          *param_1 = *puVar6;
          param_1[1] = uVar3;
          goto LAB_019e6dc0;
        }
        if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar1,uVar5,uVar5,&DAT_01d2e7d0);
        }
        iVar4 = iVar4 + uVar1;
        uVar5 = uVar5 - uVar1;
      }
    } while (uVar5 != 0);
  }
  *(undefined1 *)param_1 = 4;
LAB_019e6dc0:
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}

