// FUN_018f7c80 @ 018f7c80 size=560 calls_out=14 calls_in=0
// strings: key generation failed | encaps failed

void FUN_018f7c80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar1 = FUN_01b48014(0x3ca,0);
  if (iVar1 != 0) {
    iVar2 = FUN_01b488f0();
    if ((iVar2 == 1) && (iVar2 = FUN_01b4c250(iVar1,0x3dd), iVar2 == 1)) {
      local_40 = 0;
      iVar3 = FUN_01b4898c(iVar1,&local_40);
      iVar2 = local_40;
      if (iVar3 == 1) {
        FUN_01b47028(iVar1);
        if (iVar2 != 0) {
          FUN_00703cfc(iVar2);
          FUN_018f8264(&local_40,0x4a0,iVar2);
          if (local_40 == -0x7fffffff) {
            FUN_01b46fd8(iVar2);
          }
          else {
            FUN_018f82d8(&local_40);
            FUN_018f8264(&local_30,0x4a0,iVar2);
            FUN_01b46fd8(iVar2);
            iVar3 = local_28;
            iVar1 = local_2c;
            if (local_30 != -0x7fffffff) {
              iStack_4c = local_30;
              iStack_48 = local_2c;
              local_44 = local_28;
              puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
              if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,8);
              }
              *puVar4 = "`\t";
              puVar4[1] = iVar2;
              FUN_0193a93c(&local_30,iVar1,iVar3);
              local_40 = local_30;
              iStack_3c = local_2c;
              iStack_38 = local_28;
              local_34 = puVar4;
              piVar5 = (int *)thunk_FUN_01be5118(0x10);
              if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x10);
              }
              *piVar5 = local_40;
              piVar5[1] = iStack_3c;
              piVar5[2] = iStack_38;
              piVar5[3] = (int)local_34;
              param_1[1] = piVar5;
              param_1[2] = &DAT_01d24a98;
              *param_1 = 0x80000029;
              FUN_018f82d8(&iStack_4c);
              return;
            }
          }
          iVar1 = thunk_FUN_01be5118(0xd);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xd);
          }
          FUN_01bed4e2(iVar1,"encaps failed",0xd);
          param_1[2] = iVar1;
          *param_1 = &DAT_80000020;
          param_1[1] = 0xd;
          param_1[3] = 0xd;
          FUN_01b46fd8(iVar2);
          return;
        }
        goto LAB_018f7d2c;
      }
    }
    FUN_01b47028(iVar1);
  }
LAB_018f7d2c:
  iVar1 = thunk_FUN_01be5118(0x15);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x15);
  }
  FUN_01bed4e2(iVar1,"key generation failed",0x15);
  param_1[2] = iVar1;
  *param_1 = &DAT_80000020;
  param_1[1] = 0x15;
  param_1[3] = 0x15;
  return;
}

