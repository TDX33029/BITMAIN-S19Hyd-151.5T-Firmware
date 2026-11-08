// FUN_00a49d58 @ 00a49d58 size=336 calls_out=2 calls_in=2
// strings: 

void FUN_00a49d58(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 local_30;
  
  puVar7 = (uint *)*param_2;
  puVar8 = (undefined4 *)param_2[1];
  (*(code *)puVar8[3])(&local_70,puVar7);
  uVar3 = local_68;
  uVar2 = local_6c;
  uVar1 = local_70;
  if (local_70 == 3 && local_6c == 0) {
    uVar4 = 3;
  }
  else {
    iVar5 = puVar8[1];
    iVar6 = puVar8[2];
    *param_2 = 1;
    param_2[1] = (int)&DAT_01c0cc34;
    if (iVar5 == 0x48 && iVar6 == 8) {
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(puVar7);
      }
      *(undefined1 *)(puVar7 + 0x10) = 0;
      *puVar7 = local_60;
      puVar7[1] = local_5c;
      puVar7[2] = local_58;
      FUN_01139b38(1,&DAT_01c0cc34);
    }
    else {
      FUN_01139b38(puVar7,puVar8);
      local_70 = local_60;
      local_30 = 0;
      local_68 = local_58;
      local_6c = local_5c;
      puVar7 = (uint *)FUN_009cee94(&local_70);
      FUN_01139b38(1,&DAT_01c0cc34);
    }
    *param_2 = (int)puVar7;
    param_2[1] = (int)&DAT_01c0cc04;
    if (uVar1 == 2 && uVar2 == 0) {
      *param_1 = 0;
      param_1[1] = uVar3;
      return;
    }
    if ((uVar1 & 1) == 0) {
      uVar4 = 2;
    }
    else {
      param_1[2] = uVar3;
      param_1[3] = local_64;
      uVar4 = 1;
    }
  }
  *param_1 = uVar4;
  return;
}

