// FUN_01267d54 @ 01267d54 size=872 calls_out=3 calls_in=2
// strings: SearcherVithkuqi | <searcher function> | <searcher function> | <searcher kind union> | <searcher kind union>

byte FUN_01267d54(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *local_38;
  byte local_34;
  byte local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,"SearcherVithkuqi",8);
  bVar1 = 1;
  local_38 = param_2;
  if (iVar2 != 0) goto LAB_01267d94;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_01267d94;
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568148,4);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_01267d94;
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_01267d94;
    iVar2 = FUN_00faa4e8("<searcher function>",0x13,*param_2,param_2[1]);
  }
  else {
    iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
    bVar1 = 1;
    if (iVar2 != 0) goto LAB_01267d94;
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = &local_21;
    local_21 = 1;
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00568148,4);
    if (((iVar2 != 0) || (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 != 0)) ||
       (iVar2 = FUN_00faa4e8("<searcher function>",0x13,&local_30,&DAT_01880dc4), iVar2 != 0))
    goto LAB_01267d94;
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    local_33 = 1;
    local_34 = (byte)iVar2;
  }
  bVar1 = 1;
  if (iVar2 == 0) {
    bVar1 = 1;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005691b4,4);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            bVar1 = FUN_00faa4e8("<searcher kind union>",0x15,*param_2,param_2[1]);
          }
        }
      }
    }
    else {
      local_30 = *param_2;
      local_2c = param_2[1];
      local_28 = &local_21;
      local_21 = 1;
      iVar2 = FUN_00fb1f64(&local_30,&DAT_005691b4,4);
      if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 == 0)) {
        iVar2 = FUN_00faa4e8("<searcher kind union>",0x15,&local_30,&DAT_01880dc4);
        if (iVar2 == 0) {
          bVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
        }
        else {
          bVar1 = 1;
        }
      }
    }
  }
LAB_01267d94:
  local_33 = 1;
  local_34 = bVar1;
  FUN_00fb2258(&local_38,&DAT_003ceb56,9,param_1 + 0x28,FUN_0126811c);
  if (local_33 != 1 || (local_34 & 1) != 0) {
    return (local_33 | local_34) & 1;
  }
  if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_38[1] + 0xc))(*local_38," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_38[1] + 0xc))(*local_38,"}",1);
  return bVar1 & 1;
}

