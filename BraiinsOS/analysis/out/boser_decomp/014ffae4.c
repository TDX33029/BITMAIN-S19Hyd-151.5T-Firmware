// FUN_014ffae4 @ 014ffae4 size=484 calls_out=11 calls_in=2
// strings: 

void FUN_014ffae4(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  int local_30;
  int *local_2c;
  int local_28;
  
  FUN_0153c0a8(&local_90);
  local_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_50 = param_2[4];
  uStack_4c = param_2[5];
  uStack_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
LAB_014ffb2c:
  do {
    iVar3 = FUN_01a41998(&local_60);
    if (iVar3 == 0) {
      *param_1 = local_90;
      param_1[1] = uStack_8c;
      param_1[2] = uStack_88;
      param_1[3] = uStack_84;
      param_1[4] = uStack_80;
      param_1[5] = uStack_7c;
      param_1[6] = local_78;
      param_1[7] = uStack_74;
      param_1[8] = uStack_70;
      param_1[9] = uStack_6c;
      param_1[10] = uStack_68;
      param_1[0xb] = uStack_64;
      return;
    }
    iVar6 = -1;
    iVar7 = param_3;
    iVar8 = param_4 * 100;
    do {
      iVar5 = iVar6;
      if (iVar8 == 0) {
        FUN_0134aee0(0,4,4,4);
        goto LAB_014ffb2c;
      }
      cVar2 = FUN_01501468(iVar7,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      iVar8 = iVar8 + -100;
      iVar6 = iVar5 + 1;
      iVar7 = iVar7 + 100;
    } while (cVar2 == '\0');
    piVar4 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x10);
    }
    iVar8 = 1;
    *piVar4 = iVar6;
    local_28 = 1;
    local_30 = 4;
    iVar6 = iVar5 + 2;
    local_2c = piVar4;
    while (iVar5 = iVar6, piVar1 = local_2c, iVar6 = local_30, iVar7 != param_4 * 100 + param_3) {
      cVar2 = FUN_01501468(iVar7,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      iVar6 = iVar5 + 1;
      iVar7 = iVar7 + 100;
      if (cVar2 != '\0') {
        if (iVar8 == local_30) {
          FUN_006520b4(&local_30,iVar8,1,4,4);
          piVar4 = local_2c;
        }
        piVar4[iVar8] = iVar5;
        iVar8 = iVar8 + 1;
        local_28 = iVar8;
      }
    }
    FUN_006666fc(auStack_3c,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    local_30 = iVar6;
    local_2c = piVar1;
    local_28 = iVar8;
    uVar9 = FUN_014fcb58(&local_30);
    uVar9 = FUN_0154179c(&local_90,auStack_3c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    if ((int)uVar9 != 0 && (int)((ulonglong)uVar9 >> 0x20) != 0) {
      thunk_FUN_01be4678();
    }
  } while( true );
}

