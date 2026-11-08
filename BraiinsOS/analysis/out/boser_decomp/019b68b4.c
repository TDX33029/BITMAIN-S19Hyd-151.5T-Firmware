// FUN_019b68b4 @ 019b68b4 size=812 calls_out=14 calls_in=1
// strings: 

void FUN_019b68b4(undefined4 *param_1,int *param_2,uint *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *unaff_r8;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_30;
  int local_2c;
  
  uVar8 = *param_3;
  if (uVar8 == 0) {
LAB_019b6908:
    if (param_3[2] == 0) {
LAB_019b6940:
      if (param_3[4] == 0) {
LAB_019b698c:
        iVar1 = param_2[0x1c];
        if (((iVar1 == 0) || (iVar3 = FUN_01be3f40(param_2[0x1d],iVar1), iVar3 != -1)) &&
           ((param_2[2] == 0 || (iVar3 = FUN_01bf0470(param_2[3]), iVar3 != -1)))) {
          if (*param_2 != 0) {
            unaff_r8 = (undefined4 *)param_2[1];
            if ((iVar1 == 0) && (iVar1 = FUN_01be3f40(0,0), iVar1 == -1)) {
              piVar2 = (int *)FUN_01be3244();
              local_2c = *piVar2;
              local_30 = 0;
              if (local_2c != 1) {
                *param_1 = 0;
                param_1[1] = local_2c;
                goto LAB_019b6b2c;
              }
              FUN_0197acb4(&local_30);
            }
            iVar1 = FUN_01bf0498(unaff_r8);
            if (iVar1 == -1) goto LAB_019b6b18;
          }
          if (((param_2[0x1a] != 0) && (iVar1 = FUN_01be3dd0(), iVar1 == -1)) ||
             ((param_2[0x18] != 0 && (iVar1 = FUN_01bf01c8(), iVar1 == -1)))) goto LAB_019b6b18;
          if ((param_2[4] == 0) || (iVar1 = FUN_01bf047c(0,param_2[5]), iVar1 != -1)) {
            if ((*(char *)((int)param_2 + 0x7a) == '\x01') && (iVar1 = FUN_01bf048a(), iVar1 == -1))
            goto LAB_019b6b18;
            iVar1 = FUN_01bea98e(0xd,0);
            if (iVar1 != -1) {
              if (param_2[0x11] != 0) {
                puVar6 = (undefined4 *)param_2[0x10];
                unaff_r8 = &local_30;
                puVar7 = puVar6 + param_2[0x11] * 2;
                do {
                  (**(code **)(puVar6[1] + 0x10))(unaff_r8,*puVar6);
                  if ((char)local_30 != '\x04') {
                    *param_1 = local_30;
                    param_1[1] = local_2c;
                    goto LAB_019b6b2c;
                  }
                  puVar6 = puVar6 + 2;
                } while (puVar6 != puVar7);
              }
              if (param_4 != 0) {
                unaff_r8 = DAT_01d5348c;
                DAT_01d5348c = *(undefined4 **)(param_4 + 4);
              }
              FUN_01be9f5c(param_2[0x16],param_2[0xd]);
              puVar6 = (undefined4 *)FUN_01be3244();
              uVar4 = *puVar6;
              *(undefined1 *)param_1 = 0;
              param_1[1] = uVar4;
              if (param_4 != 0) {
                DAT_01d5348c = unaff_r8;
              }
              FUN_019b6ef4(param_3);
              return;
            }
          }
          puVar6 = (undefined4 *)FUN_01be3244();
          uVar4 = *puVar6;
          *(undefined1 *)param_1 = 0;
        }
        else {
LAB_019b6b18:
          puVar6 = (undefined4 *)FUN_01be3244();
          uVar4 = *puVar6;
          *(undefined1 *)param_1 = 0;
        }
        param_1[1] = uVar4;
        goto LAB_019b6b2c;
      }
      uVar5 = param_3[5];
      do {
        iVar1 = FUN_01bf020e(uVar5,2);
        if (iVar1 != -1) goto LAB_019b698c;
        piVar2 = (int *)FUN_01be3244();
        iVar1 = *piVar2;
      } while (iVar1 == 4);
    }
    else {
      uVar5 = param_3[3];
      do {
        iVar1 = FUN_01bf020e(uVar5,1);
        if (iVar1 != -1) goto LAB_019b6940;
        piVar2 = (int *)FUN_01be3244();
        iVar1 = *piVar2;
      } while (iVar1 == 4);
    }
  }
  else {
    uVar5 = param_3[1];
    do {
      iVar1 = FUN_01bf020e(uVar5,0);
      if (iVar1 != -1) goto LAB_019b6908;
      piVar2 = (int *)FUN_01be3244();
      iVar1 = *piVar2;
    } while (iVar1 == 4);
  }
  param_1[1] = iVar1;
  *(undefined1 *)((int)param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 1) = 0;
  *(undefined1 *)param_1 = 0;
LAB_019b6b2c:
  if (1 < uVar8) {
    FUN_01bf01d6(param_3[1]);
  }
  if (1 < param_3[2]) {
    FUN_01bf01d6(param_3[3]);
  }
  if (param_3[4] < 2) {
    return;
  }
  FUN_01bf01d6(param_3[5]);
  return;
}

