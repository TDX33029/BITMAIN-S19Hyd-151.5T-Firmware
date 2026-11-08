// FUN_0176e49c @ 0176e49c size=812 calls_out=9 calls_in=2
// strings: `len` greater than remaining

void FUN_0176e49c(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_54;
  uint local_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  uint local_38;
  int aiStack_34 [2];
  uint local_2c;
  uint local_28;
  
  iVar4 = *param_2;
  if (iVar4 == 0) {
    uVar2 = param_2[3];
  }
  else {
    uVar2 = 0;
    if (iVar4 == 1) {
      uVar2 = param_2[3] - param_2[4];
      if ((uint)param_2[3] < (uint)param_2[4]) {
        uVar2 = 0;
      }
      if (param_2[5] != 0) {
        uVar2 = 0;
      }
    }
  }
  uVar1 = param_2[6];
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    if (param_1[2] == 0) {
      if (iVar4 == 0) {
        uVar2 = param_2[3];
        uVar3 = param_2[3];
        if (uVar1 < (uint)param_2[3]) {
          uVar3 = uVar1;
        }
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
      }
      else if (iVar4 == 1) {
        uVar3 = param_2[3] - param_2[4];
        if ((uint)param_2[3] < (uint)param_2[4]) {
          uVar3 = 0;
        }
        if (param_2[5] != 0) {
          uVar3 = 0;
        }
        if (uVar1 < uVar3) {
          uVar3 = uVar1;
        }
        if (param_3 < uVar3) {
          uVar3 = param_3;
        }
        uVar2 = param_2[3] - param_2[4];
        if ((uint)param_2[3] < (uint)param_2[4]) {
          uVar2 = 0;
        }
        if (param_2[5] != 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
      if (uVar1 < uVar2) {
        uVar2 = uVar1;
      }
      if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("`len` greater than remaining",0x39,&DAT_01d2e1cc);
      }
      FUN_0176e24c(&local_40,param_2);
      FUN_0128341c(&local_54,&local_40);
      if (local_54 == 0) {
        FUN_012840cc(param_1);
        *param_1 = local_50;
        param_1[1] = iStack_4c;
        param_1[2] = uStack_48;
        param_1[3] = iStack_44;
      }
      else {
        local_40 = local_50;
        local_3c = iStack_4c;
        local_38 = uStack_48;
        aiStack_34[0] = iStack_44;
        iVar4 = param_1[1];
        local_28 = -iVar4;
        if (local_28 < uStack_48) {
          FUN_01283c9c(param_1,uStack_48);
          iVar4 = param_1[1];
          local_28 = param_1[2] - iVar4;
        }
        FUN_01bed4e2(*param_1 + iVar4,iStack_4c,uStack_48);
        if (local_28 < uStack_48) {
          local_2c = uStack_48;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_2c);
        }
        param_1[1] = iVar4 + uStack_48;
        (**(code **)(local_40 + 0x10))(aiStack_34,local_3c,local_38);
      }
    }
    else {
      if (iVar4 == 2) {
        uVar2 = 0;
      }
      else if (iVar4 == 1) {
        uVar2 = param_2[3] - param_2[4];
        if ((uint)param_2[3] < (uint)param_2[4]) {
          uVar2 = 0;
        }
        if (param_2[5] != 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = param_2[3];
      }
      if (uVar1 < uVar2) {
        uVar2 = uVar1;
      }
      if (param_3 < uVar2) {
        uVar2 = param_3;
      }
      if ((uint)(param_1[2] - param_1[1]) < uVar2) {
        FUN_01283c9c(param_1);
      }
      while( true ) {
        uVar2 = 0;
        if (iVar4 != 2) {
          if (iVar4 == 1) {
            uVar2 = param_2[3] - param_2[4];
            if ((uint)param_2[3] < (uint)param_2[4]) {
              uVar2 = 0;
            }
            if (param_2[5] != 0) {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = param_2[3];
          }
        }
        if ((uint)param_2[6] < uVar2) {
          uVar2 = param_2[6];
        }
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        if (uVar2 == 0) break;
        uVar5 = FUN_01a6a190(param_2);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
        iVar4 = param_1[1];
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        local_50 = param_1[2] - iVar4;
        if (local_50 < uVar2) {
          FUN_01283c9c(param_1,uVar2);
          iVar4 = param_1[1];
          local_50 = param_1[2] - iVar4;
        }
        FUN_01bed4e2(*param_1 + iVar4,(int)uVar5,uVar2);
        if (local_50 < uVar2) {
          local_54 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_54);
        }
        param_1[1] = iVar4 + uVar2;
        FUN_017660fc(param_2,uVar2);
        iVar4 = *param_2;
        param_3 = param_3 - uVar2;
      }
    }
  }
  return;
}

