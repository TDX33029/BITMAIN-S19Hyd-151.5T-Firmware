// FUN_01bee0a0 @ 01bee0a0 size=314 calls_out=2 calls_in=3
// strings: 

int FUN_01bee0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  uint local_40;
  int local_3c;
  undefined1 *local_38;
  uint local_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  int local_24;
  
  iVar4 = (uint)(param_5 != 0) << 7;
  puVar3 = (uint *)0x0;
  if (param_4 != (uint *)0x0) {
    if ((&DAT_3b9ac9ff < (undefined1 *)param_4[2]) ||
       (iVar2 = FUN_01bf0028(param_3,&local_40), iVar2 != 0)) {
      return 0x16;
    }
    bVar5 = *param_4 < local_40;
    local_40 = *param_4 - local_40;
    local_38 = (undefined1 *)(param_4[2] - (int)local_38);
    local_3c = (param_4[1] - local_3c) - (uint)bVar5;
    if ((int)local_38 < 0) {
      bVar5 = local_40 == 0;
      local_40 = local_40 - 1;
      local_3c = local_3c - (uint)bVar5;
      local_38 = &DAT_3b9aca00 + (int)local_38;
    }
    puVar1 = local_38;
    if (local_3c < 0) {
      return 0x6e;
    }
    local_30 = local_40;
    if (local_3c + (uint)(0x7fffffff < local_40) != 0) {
      local_24 = (int)local_38 >> 0x1f;
      local_28 = local_38;
      puStack_2c = (undefined1 *)local_3c;
      iVar2 = thunk_FUN_01bee080(0x1a6,param_1,iVar4,param_2,&local_30,0,0);
      if (iVar2 != -0x26) goto LAB_01bee136;
      local_30 = 0x7fffffff;
    }
    puVar3 = &local_30;
    puStack_2c = puVar1;
  }
  iVar2 = thunk_FUN_01bee080(0xf0,param_1,iVar4,param_2,puVar3,0,0);
  if (iVar2 == -0x26) {
    iVar2 = thunk_FUN_01bee080(0xf0,param_1,0,param_2,puVar3,0,0);
  }
LAB_01bee136:
  if (iVar2 == -0x6e || iVar2 == -4) {
    if (iVar2 == -4) {
      iVar2 = (uint)(DAT_01d537bc != 0) << 2;
    }
    else {
      iVar2 = -iVar2;
    }
  }
  else if (iVar2 == -0x7d) {
    iVar2 = 0x7d;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

