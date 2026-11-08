// FUN_0160fb2c @ 0160fb2c size=388 calls_out=1 calls_in=1
// strings: 

void FUN_0160fb2c(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_30 [3];
  
  puVar7 = (undefined4 *)*param_2;
  iVar8 = param_2[1];
  puVar6 = puVar7;
  if (3 < (uint)(iVar8 - (int)puVar7)) {
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    puVar6 = puVar7 + 1;
    uVar10 = *puVar7;
    *param_2 = (int)puVar6;
    if (3 < (uint)(iVar8 - (int)puVar6)) {
      local_30[0] = 0x80000005;
      FUN_00f2cc28(local_30);
      puVar6 = puVar7 + 2;
      *param_2 = (int)puVar6;
      if (3 < (uint)(iVar8 - (int)puVar6)) {
        uVar9 = puVar7[1];
        local_30[0] = 0x80000005;
        FUN_00f2cc28(local_30);
        puVar6 = puVar7 + 3;
        *param_2 = (int)puVar6;
        if (3 < (uint)(iVar8 - (int)puVar6)) {
          uVar1 = puVar7[2];
          local_30[0] = 0x80000005;
          FUN_00f2cc28(local_30);
          puVar6 = puVar7 + 4;
          *param_2 = (int)puVar6;
          if (3 < (uint)(iVar8 - (int)puVar6)) {
            uVar2 = puVar7[3];
            local_30[0] = 0x80000005;
            FUN_00f2cc28(local_30);
            puVar6 = puVar7 + 5;
            *param_2 = (int)puVar6;
            if (3 < (uint)(iVar8 - (int)puVar6)) {
              puVar6 = (undefined4 *)puVar7[4];
              local_30[0] = 0x80000005;
              FUN_00f2cc28(local_30);
              *param_2 = (int)(puVar7 + 6);
              uVar5 = puVar7[5];
              iVar8 = 0x18;
              iVar3 = 0x14;
              iVar4 = 0x10;
              param_1[3] = uVar1;
              uVar1 = 0;
              param_1[1] = uVar10;
              param_1[2] = uVar9;
              goto LAB_0160fbd8;
            }
          }
        }
      }
    }
  }
  uVar2 = 0x80000005;
  iVar4 = 4;
  iVar3 = 8;
  iVar8 = 0xc;
  uVar1 = 1;
  uVar5 = 4;
LAB_0160fbd8:
  *(undefined4 *)((int)param_1 + iVar4) = uVar2;
  *(undefined4 **)((int)param_1 + iVar3) = puVar6;
  *(undefined4 *)((int)param_1 + iVar8) = uVar5;
  *param_1 = uVar1;
  return;
}

