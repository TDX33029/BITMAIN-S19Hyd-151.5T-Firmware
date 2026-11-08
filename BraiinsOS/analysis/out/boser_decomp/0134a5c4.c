// FUN_0134a5c4 @ 0134a5c4 size=348 calls_out=5 calls_in=0
// strings: description | internal_code | description | unknown_code

void FUN_0134a5c4(int *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined4 *local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  int local_9c;
  undefined8 local_98;
  undefined8 local_18;
  
  local_a0 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005333ba,5);
  iVar5 = *param_1;
  local_9f = 0;
  local_a4 = param_2;
  if (iVar5 < 0) {
    uVar7 = FUN_0134a8c0(iVar5);
    uVar6 = CONCAT44(local_18._4_4_,(int)local_18);
    local_98 = CONCAT44(local_98._4_4_,iVar5);
    if ((int)uVar7 != 0) {
      local_18._0_4_ = iVar5;
      local_98 = uVar7;
      ppuVar1 = (undefined4 **)FUN_01302c38(&local_a4,"internal_code",0xd,&local_18,&LAB_01a86300);
      uVar6 = CONCAT44(local_18._4_4_,(int)local_18);
      puVar4 = &local_98;
      goto LAB_0134a6e0;
    }
    puVar4 = &local_98;
    uVar3 = 0xc;
    pcVar2 = "unknown_code";
    puVar8 = &LAB_01a86300;
    ppuVar1 = &local_a4;
  }
  else {
    local_9c = iVar5;
    FUN_01302c38(&local_a4,&DAT_0056ff78,8,&local_9c,&DAT_00659d24);
    FUN_01bed93e(&local_98,0,0x80);
    uVar6 = FUN_0134a854(local_9c,&local_98);
    if ((int)uVar6 == 0) goto LAB_0134a6e8;
    ppuVar1 = &local_a4;
    puVar4 = &local_18;
LAB_0134a6e0:
    puVar8 = &LAB_018a0040;
    pcVar2 = "description";
    uVar3 = 0xb;
  }
  local_18 = uVar6;
  FUN_01302c38(ppuVar1,pcVar2,uVar3,puVar4,puVar8);
LAB_0134a6e8:
  FUN_01302e1c(&local_a4);
  return;
}

