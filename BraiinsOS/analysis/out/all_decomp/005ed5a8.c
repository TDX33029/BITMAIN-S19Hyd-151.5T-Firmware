// FUN_005ed5a8 @ 005ed5a8 size=396 calls_out=3 calls_in=2
// strings: 

void FUN_005ed5a8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar1 = *(uint *)(param_2 + 0x1ac);
  uVar3 = *(uint *)(param_2 + 0x2fc);
  if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar1,&DAT_01856b48);
  }
  uVar8 = *(uint *)(param_2 + 0x300);
  if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar8,uVar1,&DAT_01856b48);
  }
  uVar4 = *(uint *)(*(int *)(param_2 + 0x1a8) + uVar3 * 0x14);
  uVar1 = *(uint *)(*(int *)(param_2 + 0x1a8) + uVar8 * 0x14);
  if (uVar4 == 0) {
LAB_005ed664:
    if (uVar1 == 0) {
      FUN_005ed3dc(&local_38,param_2 + 0x1a4,uVar3,uVar8);
      if (local_38 != 3) {
        *param_1 = local_38;
        param_1[1] = iStack_34;
        param_1[2] = iStack_30;
        param_1[3] = iStack_2c;
        param_1[4] = iStack_28;
        param_1[5] = iStack_24;
        return;
      }
      if (*(uint *)(param_2 + 0x1ac) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,*(uint *)(param_2 + 0x1ac),&DAT_01856bc8);
      }
      *param_1 = 3;
      *(undefined4 *)(*(int *)(param_2 + 0x1a8) + uVar8 * 0x14 + 0xc) = 0;
      return;
    }
  }
  else if (uVar1 != 0) {
    uVar2 = *(uint *)(param_2 + 0x1b8);
    if (uVar2 <= uVar4) {
LAB_005ed6f4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar2,&DAT_01856bd8);
    }
    if (uVar1 < uVar2) {
      iVar7 = *(int *)(param_2 + 0x1b4);
      do {
        iVar5 = iVar7 + uVar4 * 9;
        iVar6 = iVar7 + uVar1 * 9;
        uVar4 = *(uint *)(iVar5 + 5);
        *(undefined4 *)(iVar6 + 1) = *(undefined4 *)(iVar5 + 1);
        if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar1,uVar2,&DAT_01856b58);
        }
        uVar1 = *(uint *)(iVar6 + 5);
        if (uVar4 == 0) goto LAB_005ed664;
        if (uVar1 == 0) goto LAB_005ed6dc;
        if (uVar2 <= uVar4) goto LAB_005ed6f4;
      } while (uVar1 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,uVar2,&DAT_01856be8);
  }
LAB_005ed6dc:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_01856bf8);
}

