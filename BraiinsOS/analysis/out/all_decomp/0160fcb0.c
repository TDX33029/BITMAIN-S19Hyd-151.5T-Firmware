// FUN_0160fcb0 @ 0160fcb0 size=416 calls_out=3 calls_in=1
// strings: 

void FUN_0160fcb0(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar4 = (undefined4 *)*param_2;
  puVar7 = (undefined4 *)param_2[1];
  if ((uint)((int)puVar7 - (int)puVar4) < 4) {
    *param_1 = 0x80000005;
    param_1[1] = puVar4;
    param_1[2] = 4;
    *(undefined1 *)(param_1 + 0xb) = 2;
    return;
  }
  uVar3 = 0x80000005;
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  puVar2 = puVar4 + 1;
  uVar6 = *puVar4;
  *param_2 = (int)puVar2;
  if ((uint)((int)puVar7 - (int)puVar2) < 4) {
LAB_0160fd18:
    *param_1 = 0x80000005;
    param_1[1] = puVar2;
    param_1[2] = 4;
    *(undefined1 *)(param_1 + 0xb) = 2;
    return;
  }
  local_48 = 0x80000005;
  FUN_00f2cc28(&local_48);
  uVar5 = puVar4[1];
  *param_2 = (int)(puVar4 + 2);
  if (puVar4 + 2 != puVar7) {
    bVar1 = *(byte *)(puVar4 + 2);
    puVar2 = (undefined4 *)((int)puVar4 + 9);
    uVar3 = 0x80000007;
    *param_2 = (int)puVar2;
    if (bVar1 < 2) {
      if (3 < (uint)((int)puVar7 - (int)puVar2)) {
        local_48 = 0x80000005;
        FUN_00f2cc28(&local_48);
        uVar3 = *(undefined4 *)((int)puVar4 + 9);
        *param_2 = (int)puVar4 + 0xd;
        FUN_0161f8fc(&local_48,param_2);
        if ((char)local_48 == '\x01') {
          param_1[2] = uStack_3c;
          param_1[1] = uStack_40;
          *param_1 = local_44;
          *(undefined1 *)(param_1 + 0xb) = 2;
          return;
        }
        FUN_016dd1aa(&local_68,(uint)&local_48 | 1,0x20);
        param_1[3] = local_68;
        param_1[4] = uStack_64;
        param_1[5] = uStack_60;
        param_1[6] = uStack_5c;
        param_1[7] = local_58;
        param_1[8] = uStack_54;
        param_1[9] = uStack_50;
        param_1[10] = uStack_4c;
        *param_1 = uVar6;
        param_1[1] = uVar5;
        param_1[2] = uVar3;
        *(byte *)(param_1 + 0xb) = bVar1;
        return;
      }
      goto LAB_0160fd18;
    }
  }
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}

