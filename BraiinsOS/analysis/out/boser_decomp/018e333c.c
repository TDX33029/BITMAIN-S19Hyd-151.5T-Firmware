// FUN_018e333c @ 018e333c size=324 calls_out=3 calls_in=4
// strings: 

void FUN_018e333c(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint local_50;
  uint local_4c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = param_3 * 0x10;
  bVar9 = 0xffffffe < param_3;
  bVar8 = param_3 == 0xfffffff;
  uVar7 = 0;
  if (param_3 < 0x10000000) {
    bVar9 = 0x7ffffffb < uVar1;
    bVar8 = uVar1 == 0x7ffffffc;
  }
  if (!bVar9 || bVar8) {
    if (uVar1 == 0) {
      local_4c = 4;
      local_50 = 0;
    }
    else {
      uVar7 = 4;
      local_4c = FUN_01298504(uVar1,4);
      if (local_4c == 0) goto LAB_018e335c;
      local_50 = param_3;
      if (param_3 != 0) {
        uVar5 = 0;
        uVar6 = 0;
        do {
          if (uVar1 == uVar5) break;
          puVar4 = (undefined4 *)(param_2 + uVar5);
          uVar2 = *(undefined2 *)((int)puVar4 + 0xe);
          uVar3 = *(undefined2 *)(puVar4 + 3);
          if (*(int *)(param_2 + uVar5) == -0x80000000) {
            local_30 = *puVar4;
            uStack_2c = puVar4[1];
            uStack_28 = puVar4[2];
          }
          else {
            FUN_015e8ad4(&local_30,puVar4[1],puVar4[2]);
          }
          uVar6 = uVar6 + 1;
          puVar4 = (undefined4 *)(local_4c + uVar5);
          uVar5 = uVar5 + 0x10;
          *puVar4 = local_30;
          puVar4[1] = uStack_2c;
          puVar4[2] = uStack_28;
          *(undefined2 *)((int)puVar4 + 0xe) = uVar2;
          *(undefined2 *)(puVar4 + 3) = uVar3;
        } while (param_3 != uVar6);
      }
    }
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = param_3;
    return;
  }
LAB_018e335c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar7,uVar1);
}

