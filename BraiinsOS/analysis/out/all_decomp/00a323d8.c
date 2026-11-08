// FUN_00a323d8 @ 00a323d8 size=568 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00a323d8(uint ****param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint ***pppuVar5;
  uint ****ppppuVar6;
  code *pcVar7;
  uint ****local_3c;
  code *local_38;
  undefined1 *local_34;
  undefined1 local_2d;
  uint ****local_2c;
  uint ****local_28;
  code *local_24;
  
  pppuVar5 = *param_1;
  if (pppuVar5 == (uint ***)0x80000003) {
                    /* WARNING: Could not recover jumptable at 0x00a3240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  ppppuVar6 = (uint ****)*param_2;
  pcVar7 = (code *)param_2[1];
  pcVar4 = *(code **)(pcVar7 + 0xc);
  iVar2 = (*pcVar4)(ppppuVar6,&DAT_00569804,4);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(ppppuVar6,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = 1;
      if ((int)pppuVar5 < 0) {
        uVar3 = (uint)pppuVar5 ^ 0x80000000;
      }
      if (uVar3 == 0) {
        iVar2 = (*pcVar4)(ppppuVar6,&DAT_00414711,5);
      }
      else {
        if (uVar3 == 1) {
          local_38 = (code *)&LAB_00f4c39c;
          local_28 = param_1;
        }
        else {
          local_28 = param_1 + 1;
          local_38 = FUN_00932f04;
        }
        local_3c = (uint ****)&local_28;
        iVar2 = FUN_00fa948c(ppppuVar6,pcVar7,&DAT_00590e71,&local_3c);
      }
    }
    else {
      iVar2 = (*pcVar4)(ppppuVar6,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_34 = &local_2d;
      uVar3 = 1;
      local_2d = 1;
      if ((int)pppuVar5 < 0) {
        uVar3 = (uint)pppuVar5 ^ 0x80000000;
      }
      local_3c = ppppuVar6;
      local_38 = pcVar7;
      if (uVar3 == 0) {
        iVar2 = FUN_00fb1f64(&local_3c,&DAT_00414711,5);
      }
      else {
        if (uVar3 == 1) {
          local_24 = (code *)&LAB_00f4c39c;
          local_2c = param_1;
        }
        else {
          local_2c = param_1 + 1;
          local_24 = FUN_00932f04;
        }
        local_28 = (uint ****)&local_2c;
        iVar2 = FUN_00fa948c(&local_3c,&DAT_01880dc4,&DAT_00590e71,&local_28);
      }
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar1 = (*pcVar4)(ppppuVar6,&DAT_00418e07,1);
      return uVar1;
    }
  }
  return 1;
}

