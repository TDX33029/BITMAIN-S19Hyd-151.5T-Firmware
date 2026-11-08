// FUN_0168b848 @ 0168b848 size=352 calls_out=4 calls_in=1
// strings: 

int FUN_0168b848(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 != -0x80000000) {
    uVar6 = thunk_FUN_016de0ee(*param_1,0x2c0);
    puVar4 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
    local_34 = 0x80000003;
    local_40 = 0x80000003;
    if ((char)puVar4[4] == '\0') {
      FUN_015f62e4(&local_60);
      *puVar4 = local_60;
      puVar4[1] = uStack_5c;
      puVar4[2] = uStack_58;
      puVar4[3] = local_54;
      *(undefined1 *)(puVar4 + 4) = 1;
    }
    uVar2 = *puVar4;
    *puVar4 = uVar2 + 1;
    puVar4[1] = puVar4[1] + (uint)(0xfffffffe < uVar2);
    puVar5 = (undefined4 *)((uint)&local_60 | 4);
    *puVar5 = local_40;
    puVar5[1] = uStack_3c;
    puVar5[2] = uStack_38;
    puVar5[3] = local_34;
    puVar5[4] = uStack_30;
    puVar5[5] = uStack_2c;
    iVar1 = FUN_0168248c(param_1[0x12],param_1[0x13],param_1);
    return iVar1;
  }
  uVar3 = param_1[2];
  uVar2 = *(uint *)(param_1[1] + 8);
  if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar2,&DAT_018add7c);
  }
  return *(int *)(param_1[1] + 4) + uVar3 * 0xc0;
}

