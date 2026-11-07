// FUN_0163d6b4 @ 0163d6b4 size=272 calls_out=4 calls_in=1
// strings: 

void FUN_0163d6b4(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_2c [4];
  uint local_28;
  
  if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,param_2 + 0xc,&DAT_00568f30,0);
  }
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 != 0) {
    iVar4 = *(int *)(param_2 + 4);
    puVar6 = &DAT_018aeaf8;
    do {
      while (uVar2 = FUN_016e034e(*param_3,iVar4,uVar5), uVar2 != 0xffffffff) {
        local_28 = uVar2;
        local_2c[0] = 4;
        if (uVar2 == 0) {
LAB_0163d774:
          uVar3 = puVar6[1];
          *param_1 = *puVar6;
          param_1[1] = uVar3;
          *(undefined4 *)(param_2 + 8) = 0;
          return;
        }
        if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar2,uVar5,uVar5,&DAT_018aeb00);
        }
        iVar4 = iVar4 + uVar2;
        uVar5 = uVar5 - uVar2;
        if (uVar5 == 0) goto LAB_0163d758;
      }
      puVar1 = (uint *)FUN_016d2bc8();
      local_2c[0] = 0;
      local_28 = *puVar1;
      if (*puVar1 != 4) {
        puVar6 = (undefined4 *)local_2c;
        goto LAB_0163d774;
      }
    } while (uVar5 != 0);
  }
LAB_0163d758:
  *(undefined1 *)param_1 = 4;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}

