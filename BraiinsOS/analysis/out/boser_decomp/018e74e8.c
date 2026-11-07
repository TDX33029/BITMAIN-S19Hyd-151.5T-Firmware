// FUN_018e74e8 @ 018e74e8 size=368 calls_out=6 calls_in=1
// strings: 

void FUN_018e74e8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined1 auStack_7c [16];
  undefined4 local_6c;
  undefined1 auStack_64 [16];
  undefined4 local_54;
  undefined1 auStack_4c [16];
  int *local_3c;
  uint local_34 [4];
  
  FUN_01931148(auStack_7c,"");
  iVar4 = param_1 + param_2 * 0x18;
  while (param_1 != iVar4) {
    FUN_0191d778(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),local_6c);
    iVar5 = *(int *)(param_1 + 4);
    iVar7 = *(int *)(param_1 + 8);
    FUN_01931148(auStack_64,&DAT_0056a6b8,local_6c);
    uVar1 = local_54;
    param_1 = param_1 + 0x18;
    puVar9 = (undefined2 *)(iVar5 + 0xe);
    for (iVar7 = iVar7 << 4; iVar7 != 0; iVar7 = iVar7 + -0x10) {
      iVar5 = *(int *)(puVar9 + -7);
      uVar3 = puVar9[-1];
      if (iVar5 == -0x7fffffff) {
        uVar3 = 5;
      }
      FUN_0190d8e0(uVar3,*puVar9,uVar1);
      local_34[0] = CONCAT31(local_34[0]._1_3_,0x19);
      FUN_01931148(auStack_4c,local_34,uVar1);
      piVar2 = local_3c;
      if (iVar5 == -0x7fffffff) {
        iVar5 = local_3c[2];
        if (iVar5 == *local_3c) {
          FUN_006666a0(local_3c);
        }
        uVar6 = *(undefined4 *)(puVar9 + -3);
        uVar8 = *(uint *)(puVar9 + -1);
        *(undefined1 *)(piVar2[1] + iVar5) = 1;
        piVar2[2] = iVar5 + 1;
        local_34[0] = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                      uVar8 >> 0x18;
        FUN_01ac6cbc(piVar2,(uint)local_34 | 1,3);
      }
      else {
        uVar6 = *(undefined4 *)(puVar9 + -5);
        uVar8 = *(uint *)(puVar9 + -3);
      }
      FUN_01ac6cbc(piVar2,uVar6,uVar8);
      FUN_01931818(auStack_4c);
      puVar9 = puVar9 + 8;
    }
    FUN_01931818(auStack_64);
  }
  FUN_01931818(auStack_7c);
  return;
}

