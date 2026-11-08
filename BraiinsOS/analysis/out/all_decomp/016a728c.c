// FUN_016a728c @ 016a728c size=460 calls_out=6 calls_in=1
// strings: 

void FUN_016a728c(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int extraout_r2;
  uint uVar6;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint uStack_28;
  
  iVar3 = thunk_FUN_016de0ee(param_1,param_2,0x2a8);
  puVar4 = (uint *)(iVar3 + extraout_r2);
  if ((*puVar4 & 1) == 0) goto LAB_016a744c;
  local_40 = puVar4[1];
  local_3c = puVar4[2];
  uStack_38 = puVar4[3];
  local_34 = (uint *)puVar4[4];
  while( true ) {
    iVar3 = *(int *)(param_5 + 0xc + local_3c * 4);
    DataMemoryBarrier(0xb);
    cVar2 = '\0';
    puVar4 = local_34;
    if (iVar3 != 0) {
      puVar4 = (uint *)(iVar3 + (int)local_34 * 0x14);
      cVar2 = (char)puVar4[4];
    }
    if (iVar3 == 0 || cVar2 == '\0') {
      local_50 = (uint *)&DAT_00000008;
      local_4c = 0;
      local_54 = 0;
      local_58 = 0;
      puVar4 = (uint *)FUN_009f14cc(param_5 + 0xc,&local_40,&local_58);
      uVar6 = *puVar4;
    }
    else {
      uVar6 = *puVar4;
    }
    if (uVar6 < 0x7fffffff) break;
    FUN_00fb71b0(&DAT_018ae508);
LAB_016a744c:
    FUN_0162b20c(&local_40);
  }
  uVar5 = puVar4[3];
  *puVar4 = uVar6 + 1;
  if (uVar5 == 0) {
    param_5 = 0;
  }
  else {
    iVar3 = uVar5 * -0x10;
    piVar1 = (int *)(puVar4[2] + uVar5 * 0x10);
    do {
      if (((char)piVar1[-2] == '\0') &&
         (FUN_016a4f80(&local_30,param_5,piVar1[-4] + -1), local_30 != (uint *)0x0)) {
        local_4c = local_2c;
        uStack_48 = uStack_28;
        local_50 = local_30;
        local_54 = 0;
        local_58 = 0;
        local_44 = param_5;
        if ((*local_30 & param_3) == 0 && (local_30[1] & param_4) == 0) {
          *param_1 = param_3;
          param_1[1] = param_4;
          param_1[2] = (uint)local_30;
          param_1[3] = local_2c;
          param_1[4] = uStack_28;
          goto LAB_016a73f4;
        }
        FUN_016a50fc(&local_50);
      }
      iVar3 = iVar3 + 0x10;
      piVar1 = piVar1 + -4;
    } while (iVar3 != 0);
    param_5 = 0;
  }
LAB_016a73f4:
  uVar6 = *puVar4;
  param_1[5] = param_5;
  *puVar4 = uVar6 - 1;
  return;
}

