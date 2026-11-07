// FUN_01982bb0 @ 01982bb0 size=488 calls_out=4 calls_in=2
// strings: 

bool FUN_01982bb0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined4 local_e0;
  int local_dc;
  char local_d8;
  undefined1 auStack_d7 [19];
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined4 local_c0;
  int local_bc;
  char local_b8;
  undefined1 auStack_b7 [19];
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar11 = *param_2;
  iVar10 = param_2[1];
  uVar9 = *param_1;
  iVar12 = param_1[1];
  if (iVar12 == iVar10) {
    cVar1 = *(char *)(param_2 + 7);
    bVar13 = *(char *)(param_1 + 7) == cVar1;
    if (bVar13) {
      cVar1 = *(char *)((int)param_1 + 0x1d);
    }
    if (((bVar13 && cVar1 == '\x02') && (*(char *)((int)param_2 + 0x1d) == '\x02')) &&
       (iVar8 = thunk_FUN_01bed842(uVar9,uVar11,iVar12), iVar8 == 0)) {
      return true;
    }
  }
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 != '\x06') {
    FUN_01bed4e2(auStack_110,(int)param_1 + 9,0x13);
  }
  uVar2 = *(undefined1 *)(param_1 + 7);
  cVar3 = *(char *)(param_2 + 2);
  uVar4 = *(undefined1 *)((int)param_1 + 0x1d);
  uVar5 = *(undefined1 *)((int)param_1 + 0x1e);
  if (cVar3 != '\x06') {
    FUN_01bed4e2(auStack_f8,(int)param_2 + 9,0x13);
  }
  uVar7 = *(undefined2 *)(param_2 + 7);
  uVar6 = *(undefined1 *)((int)param_2 + 0x1e);
  local_e0 = uVar9;
  local_dc = iVar12;
  local_d8 = cVar1;
  FUN_01bed4e2(auStack_d7,auStack_110,0x13);
  local_c4 = uVar2;
  local_c3 = uVar4;
  local_c2 = uVar5;
  local_c0 = uVar11;
  local_bc = iVar10;
  local_b8 = cVar3;
  FUN_01bed4e2(auStack_b7,auStack_f8,0x13);
  local_a4 = uVar7;
  local_a2 = uVar6;
  while( true ) {
    FUN_01982524(&local_a0,&local_e0);
    if ((char)local_a0 == '\n') {
      FUN_01982524(&local_60,&local_c0);
      return (char)local_60 == '\n';
    }
    FUN_01982524(&local_80,&local_c0);
    if ((char)local_80 == '\n') break;
    local_60 = local_a0;
    uStack_5c = uStack_9c;
    uStack_58 = uStack_98;
    local_54 = local_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_48 = uStack_88;
    local_44 = local_80;
    uStack_40 = uStack_7c;
    uStack_3c = uStack_78;
    local_38 = local_74;
    uStack_34 = uStack_70;
    uStack_30 = uStack_6c;
    uStack_2c = uStack_68;
    iVar10 = FUN_0199f550(&local_60,&local_44);
    if (iVar10 == 0) {
      return false;
    }
  }
  return false;
}

