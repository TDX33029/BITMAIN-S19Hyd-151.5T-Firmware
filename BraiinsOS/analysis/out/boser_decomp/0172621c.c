// FUN_0172621c @ 0172621c size=352 calls_out=4 calls_in=2
// strings: 

void FUN_0172621c(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_80;
  int local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  
  uVar4 = 0;
  iVar3 = (int)param_3 * 0x48;
  if (&UNK_01c71c71 < param_3) {
LAB_01726248:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar3);
  }
  if (iVar3 == 0) {
    local_7c = 4;
    local_80 = (undefined *)0x0;
  }
  else {
    uVar4 = 4;
    local_7c = FUN_01298504(iVar3,4);
    if (local_7c == 0) goto LAB_01726248;
    local_80 = param_3;
    if (param_3 != (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
      iVar1 = local_7c;
      do {
        if (iVar3 == 0) break;
        FUN_006666fc(auStack_60,param_2[5],param_2[6]);
        local_50 = param_2[8];
        local_4c = param_2[9];
        local_48 = param_2[10];
        local_44 = param_2[0xb];
        local_3c = param_2[0xd];
        uStack_38 = param_2[0xe];
        uStack_34 = param_2[0xf];
        uStack_30 = param_2[0x10];
        local_2c = *(undefined1 *)(param_2 + 0x11);
        local_70 = *param_2;
        uStack_6c = param_2[1];
        uStack_68 = param_2[2];
        uStack_64 = param_2[3];
        local_40 = param_2[0xc];
        local_54 = param_2[7];
        FUN_01bed4e2(iVar1,&local_70,0x48);
        iVar1 = iVar1 + 0x48;
        iVar3 = iVar3 + -0x48;
        param_2 = param_2 + 0x12;
        puVar2 = puVar2 + 1;
      } while (param_3 != puVar2);
    }
  }
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = param_3;
  return;
}

