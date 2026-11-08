// FUN_011ce984 @ 011ce984 size=584 calls_out=2 calls_in=0
// strings: ParseError | indexUnsupportedCaptures

undefined4 FUN_011ce984(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *local_30;
  char local_2c;
  char local_2b;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  iVar8 = *param_1;
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,"ParseError",10);
  local_2b = '\0';
  local_30 = param_2;
  FUN_00fb2258(&local_30,"indexUnsupportedCaptures",5,iVar8,FUN_007883b8);
  puVar1 = local_30;
  if (local_2c != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_2b == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_2b != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_30[1] + 0xc))(*local_30,puVar3,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_005691b4,4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar8 = (**(code **)(puVar1[1] + 0xc))
                      (*puVar1,*(undefined4 *)(&DAT_018b22b0 + (uint)*(byte *)(iVar8 + 4) * 4),
                       *(undefined4 *)(&DAT_00420460 + (uint)*(byte *)(iVar8 + 4) * 4));
  }
  else {
    if ((local_2b == '\0') &&
       (iVar2 = (**(code **)(local_30[1] + 0xc))(*local_30,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_20 = &local_19;
    local_28 = *puVar1;
    local_24 = puVar1[1];
    local_19 = 1;
    iVar2 = FUN_00fb1f64(&local_28,&DAT_005691b4,4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_28,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar8 = FUN_00fb1f64(&local_28,*(undefined4 *)(&DAT_018b22bc + (uint)*(byte *)(iVar8 + 4) * 4),
                         *(undefined4 *)(&DAT_0042046c + (uint)*(byte *)(iVar8 + 4) * 4));
    if (iVar8 != 0) {
      return 1;
    }
    iVar8 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
  }
  if (iVar8 != 0) {
    return 1;
  }
  if ((*(byte *)((int)puVar1 + 10) & 0x80) == 0) {
    uVar5 = *puVar1;
    uVar6 = 2;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar4 = " }";
  }
  else {
    uVar5 = *puVar1;
    uVar6 = 1;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar4 = "}";
  }
  uVar5 = (*pcVar7)(uVar5,pcVar4,uVar6);
  return uVar5;
}

