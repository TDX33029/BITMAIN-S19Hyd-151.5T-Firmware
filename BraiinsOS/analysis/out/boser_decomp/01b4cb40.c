// FUN_01b4cb40 @ 01b4cb40 size=488 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

void FUN_01b4cb40(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  int *piVar5;
  int iVar6;
  undefined4 extraout_r1_00;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  local_1c = DAT_01d53560;
  if (param_1 == 0) {
    uVar8 = 0x28;
LAB_01b4cb9c:
    uVar2 = 0x43;
    uVar1 = 0xe;
LAB_01b4cba0:
    FUN_01b053d4(uVar1,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",uVar8);
    uVar8 = extraout_r1;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x14);
    if (piVar5 == (int *)0x0) {
      uVar8 = 0x2a;
      goto LAB_01b4cb9c;
    }
    uVar7 = CONCAT44(piVar5,*piVar5);
    if (*piVar5 == 0) {
      iVar6 = *(int *)(param_1 + 8);
      if (iVar6 != 0) {
        uVar7 = FUN_01b4c564(*(undefined4 *)(iVar6 + 8),iVar6,&PTR_01d3b2b0,0);
        goto LAB_01b4cc38;
      }
      uVar8 = 0x2e;
      uVar2 = 0x7c;
LAB_01b4cc24:
      uVar1 = 6;
      goto LAB_01b4cba0;
    }
LAB_01b4cc38:
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar6 = (int)uVar7;
    if (param_4 == (int *)0x0) {
      uVar8 = 0x36;
      uVar2 = 0x43;
      goto LAB_01b4cc24;
    }
    if (param_3 == 0) {
      *param_4 = *(int *)(iVar6 + 0x20);
LAB_01b4cd08:
      uVar2 = 1;
      goto LAB_01b4cba8;
    }
    if (*(int *)(iVar6 + 0x20) != *param_4) {
      uVar8 = 0x42;
      uVar2 = 0x85;
      goto LAB_01b4cc24;
    }
    iVar3 = FUN_01b4c320();
    local_24 = *(undefined4 *)(iVar6 + 0x10);
    local_20 = *(undefined4 *)(iVar6 + 0x14);
    if (((iVar3 != 0) && (iVar4 = FUN_01b4c444(iVar3,iVar6), iVar4 != 0)) &&
       (iVar6 = (*(code *)**(undefined4 **)(iVar6 + 0x28))
                          (*(undefined4 *)(iVar3 + 4),&local_24,*(undefined4 *)(iVar3 + 8),&local_20
                           ,param_3), iVar6 != 0)) {
      uVar7 = FUN_01b47c44(param_2,0x3ca,iVar3);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 0) goto LAB_01b4cd08;
    }
    FUN_01b4c530(iVar3);
    uVar8 = extraout_r1_00;
  }
  uVar2 = 0;
LAB_01b4cba8:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar8,local_1c ^ DAT_01d53560,0);
  }
  return;
}

