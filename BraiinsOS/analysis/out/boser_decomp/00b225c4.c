// FUN_00b225c4 @ 00b225c4 size=480 calls_out=4 calls_in=3
// strings: 

void FUN_00b225c4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int local_60;
  undefined8 *local_5c;
  int local_58;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar1 = param_2[10];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_2[10] = 0;
      if (*(char *)((int)param_2 + 0x25) == '\0') {
        *(undefined1 *)((int)param_2 + 0x25) = 1;
        if (*(char *)(param_2 + 9) == '\x01') {
          iVar1 = param_2[7];
          iVar3 = param_2[8];
        }
        else {
          iVar1 = param_2[7];
          iVar3 = param_2[8];
          if (iVar3 == iVar1) goto LAB_00b22648;
        }
        uVar4 = CONCAT44(iVar3 - iVar1,param_2[1] + iVar1);
LAB_00b22668:
        puVar2 = (undefined8 *)thunk_FUN_01be5118(0x20);
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x20);
        }
        local_58 = 1;
        *puVar2 = uVar4;
        local_60 = 4;
        local_50 = *param_2;
        local_4c = param_2[1];
        uStack_48 = param_2[2];
        uStack_44 = param_2[3];
        uStack_40 = param_2[4];
        local_3c = param_2[5];
        uStack_38 = param_2[6];
        local_34 = param_2[7];
        local_30 = param_2[8];
        local_2c = param_2[9];
        local_28 = param_2[10];
        iVar1 = 0;
        local_5c = puVar2;
        do {
          if (local_28 == 1) {
            local_28 = 0;
            if (local_2c._1_1_ != '\0') {
LAB_00b22788:
              *param_1 = local_60;
              param_1[1] = (int)local_5c;
              param_1[2] = local_58;
              return;
            }
            local_2c._0_2_ = CONCAT11(1,(char)local_2c);
            if (((char)local_2c != '\x01') && (local_30 == local_34)) goto LAB_00b22788;
            uVar4 = CONCAT44(local_30 - local_34,local_4c + local_34);
          }
          else {
            if (local_28 == 0) goto LAB_00b22788;
            local_28 = local_28 + -1;
            uVar4 = FUN_00b156d4(&local_50);
            if ((int)uVar4 == 0) goto LAB_00b22788;
          }
          iVar3 = iVar1 + 1;
          if (iVar3 == local_60) {
            FUN_006520b4(&local_60,iVar3,1,4,8);
            puVar2 = local_5c;
          }
          puVar2[iVar1 + 1] = uVar4;
          local_58 = iVar1 + 2;
          iVar1 = iVar3;
        } while( true );
      }
    }
    else {
      param_2[10] = iVar1 + -1;
      uVar4 = FUN_00b156d4(param_2);
      if ((int)uVar4 != 0) goto LAB_00b22668;
    }
  }
LAB_00b22648:
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  return;
}

