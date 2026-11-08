// FUN_01542bec @ 01542bec size=392 calls_out=3 calls_in=0
// strings: 

void FUN_01542bec(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 == '\x05') {
    iVar7 = 0;
    iVar6 = 4;
    local_6c = 0;
    local_70 = 4;
    local_74 = 0;
    iVar10 = 0;
    if (*(int *)(param_2 + 8) != 0) {
      puVar9 = (undefined4 *)(*(int *)(param_2 + 4) + 8);
      iVar10 = *(int *)(param_2 + 8) << 5;
      uVar8 = *(undefined4 *)(param_3 + 8);
      uVar2 = *(undefined4 *)(param_3 + 4);
      do {
        iVar3 = FUN_0196b2cc(uVar2,uVar8,puVar9[-1],*puVar9);
        if (iVar3 != 0) {
          FUN_015737d4(&local_68,puVar9 + 1,param_3,param_4,param_5,param_6);
          if (iVar7 == local_74) {
            FUN_0155ab78(&local_74);
            iVar6 = local_70;
          }
          puVar4 = (undefined4 *)(iVar6 + iVar7 * 0x40);
          iVar7 = iVar7 + 1;
          *puVar4 = local_68;
          puVar4[1] = uStack_64;
          puVar4[2] = uStack_60;
          puVar4[3] = uStack_5c;
          puVar4[4] = uStack_58;
          puVar4[5] = local_54;
          puVar4[6] = uStack_50;
          puVar4[7] = uStack_4c;
          puVar4[8] = uStack_48;
          puVar4[9] = uStack_44;
          puVar4[10] = local_40;
          puVar4[0xb] = uStack_3c;
          puVar4[0xc] = uStack_38;
          puVar4[0xd] = uStack_34;
          puVar4[0xe] = uStack_30;
          puVar4[0xf] = uStack_2c;
          local_6c = iVar7;
        }
        puVar9 = puVar9 + 8;
        iVar10 = iVar10 + -0x20;
      } while (iVar10 != 0);
      iVar10 = local_74;
    }
    iVar3 = iVar7 << 6;
    iVar5 = iVar6;
    do {
      if (iVar3 == 0) {
        *param_1 = 0x80000000;
        param_1[1] = iVar10;
        param_1[2] = iVar6;
        param_1[3] = iVar7;
        param_1[4] = 0;
        return;
      }
      pcVar1 = (char *)(iVar5 + 0x3c);
      iVar3 = iVar3 + -0x40;
      iVar5 = iVar5 + 0x40;
    } while (*pcVar1 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = iVar10;
    param_1[4] = iVar6;
    param_1[5] = iVar7;
    param_1[6] = 0;
  }
  else {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

