// FUN_01accbb8 @ 01accbb8 size=1044 calls_out=11 calls_in=4
// strings: 

void FUN_01accbb8(int *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,undefined2 param_9,undefined2 param_10,uint param_11
                 ,undefined4 param_12,undefined4 param_13)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_11 == param_4 + 1) {
    iVar4 = param_2[1];
    uVar6 = param_2[2];
    if (param_11 == 0) {
LAB_01accc6c:
      if ((1 < uVar6 - param_11) && (*(short *)(iVar4 + param_11) == 0x2f2f)) {
        if (param_11 != 0) {
          if (param_11 < uVar6) {
            if ((char)*(short *)(iVar4 + param_11) < -0x40) {
LAB_01accca8:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_0053285a,0x2c,&DAT_01d2fc38);
            }
          }
          else if (uVar6 != param_11) goto LAB_01accca8;
        }
        if (*param_2 - uVar6 < 2) {
          FUN_01af7b44(param_2,uVar6,2,1,1);
          iVar4 = param_2[1];
        }
        puVar5 = (undefined2 *)(iVar4 + param_11);
        FUN_01bed864(puVar5 + 1,puVar5,uVar6 - param_11);
        uVar6 = uVar6 + 2;
        *puVar5 = 0x2e2f;
        param_11 = param_11 + 2;
        param_2[2] = uVar6;
      }
      if (param_4 == 0) {
LAB_01acce44:
        if ((2 < uVar6 - param_4) &&
           (iVar4 = thunk_FUN_01bed842(&DAT_005327c5,iVar4 + param_4,3), iVar4 == 0)) {
          puVar2 = &DAT_01d2fc58;
LAB_01accf7c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_005327c8,0x4f,puVar2);
        }
LAB_01acce6c:
        FUN_01aceee8(&local_34,param_2,param_3,param_4,param_12,param_13);
        if (local_34 == 2) {
          *(undefined1 *)(param_1 + 1) = (undefined1)local_30;
          FUN_019bb7e0(*param_2,param_2[1]);
          local_34 = 2;
        }
        else {
          iVar4 = param_2[1];
          iVar3 = param_2[2];
          param_1[4] = *param_2;
          param_1[5] = iVar4;
          param_1[6] = iVar3;
          FUN_01bed4e2(param_1 + 0xd,param_8,0x11);
          param_1[9] = param_5;
          param_1[10] = param_6;
          param_1[0xb] = param_7;
          *(undefined2 *)((int)param_1 + 0x1e) = param_10;
          *(undefined2 *)(param_1 + 7) = param_9;
          param_1[8] = param_4;
          param_1[0xc] = param_11;
          param_1[1] = local_30;
          param_1[2] = local_2c;
          param_1[3] = local_28;
        }
        *param_1 = local_34;
        return;
      }
      if (param_4 < uVar6) {
        if (-0x41 < *(char *)(iVar4 + param_4)) goto LAB_01acce44;
      }
      else if (uVar6 == param_4) goto LAB_01acce44;
      puVar2 = &DAT_01d2fc48;
      param_11 = param_4;
    }
    else {
      if (param_11 < uVar6) {
        if (-0x41 < *(char *)(iVar4 + param_11)) goto LAB_01accc6c;
      }
      else if (uVar6 == param_11) goto LAB_01accc6c;
      puVar2 = &DAT_01d2fc28;
    }
  }
  else {
    if (param_11 != param_4 + 3) goto LAB_01acce6c;
    puVar2 = &DAT_01d2fbc8;
    iVar4 = param_2[1];
    uVar6 = param_2[2];
    if (param_11 < param_4) goto LAB_01accce8;
    if (param_4 != 0) {
      if (param_4 < uVar6) {
        if (-0x41 < *(char *)(iVar4 + param_4)) goto LAB_01acccc8;
      }
      else if (param_4 == uVar6) goto LAB_01acccc8;
      goto LAB_01accce8;
    }
LAB_01acccc8:
    if (param_11 != 0) {
      if (param_11 < uVar6) {
        if (*(char *)(iVar4 + param_11) < -0x40) {
LAB_01accce8:
          goto LAB_01acce2c;
        }
      }
      else if (param_11 != uVar6) goto LAB_01accce8;
    }
    if ((param_11 - param_4 != 3) ||
       (iVar3 = thunk_FUN_01bed842(iVar4 + param_4,&DAT_005327c1,3), iVar3 != 0)) goto LAB_01acce6c;
    if (uVar6 <= param_11) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_11,uVar6,&DAT_01d2fbd8);
    }
    if (*(char *)(iVar4 + param_11) != '/') {
      FUN_01ad029c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1accfd4);
      (*pcVar1)();
    }
    if ((uVar6 <= param_11 + 1) || (*(char *)(iVar4 + param_11 + 1) != '/')) {
      FUN_01ad0484(param_2,param_4,param_11,":",1,&DAT_01d2fbe8);
      param_11 = param_11 - 2;
      iVar4 = param_2[1];
      uVar6 = param_2[2];
    }
    if (param_4 == 0) {
LAB_01accf40:
      if ((2 < uVar6 - param_4) &&
         (iVar4 = thunk_FUN_01bed842(&DAT_005327c5,iVar4 + param_4,3), iVar4 == 0)) {
        puVar2 = &DAT_01d2fc08;
        goto LAB_01accf7c;
      }
      goto LAB_01acce6c;
    }
    if (param_4 < uVar6) {
      if (-0x41 < *(char *)(iVar4 + param_4)) goto LAB_01accf40;
    }
    else if (uVar6 == param_4) goto LAB_01accf40;
    puVar2 = &DAT_01d2fbf8;
    param_11 = param_4;
  }
  param_4 = param_11;
  param_11 = uVar6;
LAB_01acce2c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(iVar4,uVar6,param_4,param_11,puVar2);
}

