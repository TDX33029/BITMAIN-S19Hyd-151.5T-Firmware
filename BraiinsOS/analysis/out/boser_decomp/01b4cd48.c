// FUN_01b4cd48 @ 01b4cd48 size=392 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c | /aws-lc/crypto/fipsmodule/evp/p_kem.c

void FUN_01b4cd48(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  local_1c = DAT_01d53560;
  if (param_1 == 0) {
    uVar7 = 0x55;
LAB_01b4cd9c:
    uVar2 = 0x43;
    uVar1 = 0xe;
LAB_01b4cda0:
    FUN_01b053d4(uVar1,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",uVar7);
    uVar1 = extraout_r1;
  }
  else {
    if (*(int **)(param_1 + 0x14) == (int *)0x0) {
      uVar7 = 0x57;
      goto LAB_01b4cd9c;
    }
    iVar5 = **(int **)(param_1 + 0x14);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 != 0) {
        iVar5 = FUN_01b4c564(*(undefined4 *)(iVar5 + 8),iVar5,&PTR_01d3b2b0,0);
        goto LAB_01b4ce38;
      }
      uVar7 = 0x5b;
      uVar2 = 0x7c;
      uVar1 = 6;
      goto LAB_01b4cda0;
    }
LAB_01b4ce38:
    iVar3 = FUN_01b4c320();
    local_24 = *(undefined4 *)(iVar5 + 0x10);
    local_20 = *(undefined4 *)(iVar5 + 0x14);
    if ((((iVar3 != 0) && (iVar4 = FUN_01b4c444(iVar3,iVar5), iVar4 != 0)) &&
        (iVar5 = (**(code **)(*(int *)(iVar5 + 0x28) + 4))
                           (*(undefined4 *)(iVar3 + 4),&local_24,*(undefined4 *)(iVar3 + 8),
                            &local_20), iVar5 != 0)) &&
       (uVar6 = FUN_01b47c28(param_2,0x3ca), uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20),
       (int)uVar6 != 0)) {
      uVar2 = 1;
      *(int *)(param_2 + 8) = iVar3;
      goto LAB_01b4cda8;
    }
    FUN_01b4c530(iVar3);
    uVar1 = extraout_r1_00;
  }
  uVar2 = 0;
LAB_01b4cda8:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar1,local_1c ^ DAT_01d53560,0);
  }
  return;
}

