// FUN_01668be0 @ 01668be0 size=400 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01668be0(undefined4 *param_1,undefined4 *param_2)

{
  code cVar1;
  code cVar2;
  code **ppcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code **local_44;
  code *local_40;
  code *local_3c;
  code *local_38;
  code *local_34;
  code *local_30;
  code *local_2c;
  code *local_28;
  
  pcVar8 = (code *)*param_1;
  uVar10 = *param_2;
  uVar11 = param_2[1];
  local_34 = pcVar8 + 6;
  local_3c = pcVar8 + 5;
  local_44 = (code **)(pcVar8 + 4);
  local_30 = FUN_00fac0c8;
  local_38 = FUN_00fac0c8;
  local_40 = FUN_00fac0c8;
  iVar4 = FUN_00fa948c(uVar10,uVar11,&DAT_00414122,&local_44);
  uVar5 = 1;
  if (iVar4 == 0) {
    if (*(int *)pcVar8 == 0) {
      return 0;
    }
    local_28 = (code *)&LAB_00fac484;
    local_2c = pcVar8;
    FUN_00600d2c(&local_44,&DAT_00569ed0,&local_2c);
    pcVar8 = local_40;
    ppcVar3 = local_44;
    pcVar7 = local_3c;
    do {
      local_28 = pcVar7;
      if (local_28 == (code *)0x0) {
        local_28 = (code *)0x0;
        break;
      }
      pcVar7 = local_40 + (int)(local_28 + -1);
      uVar6 = (uint)(char)*pcVar7;
      if (0x7fffffff < uVar6) {
        pcVar7 = local_40 + (int)(local_28 + -2);
        cVar1 = *pcVar7;
        if ((char)cVar1 < -0x40) {
          pcVar7 = local_40 + (int)(local_28 + -3);
          cVar2 = *pcVar7;
          if ((char)cVar2 < -0x40) {
            pcVar7 = local_40 + (int)(local_28 + -4);
            uVar9 = (int)(char)cVar2 & 0x3fU | ((byte)*pcVar7 & 7) << 6;
          }
          else {
            uVar9 = (byte)cVar2 & 0xf;
          }
          uVar9 = (int)(char)cVar1 & 0x3fU | uVar9 << 6;
        }
        else {
          uVar9 = (byte)cVar1 & 0x1f;
        }
        uVar6 = uVar6 & 0x3f | uVar9 << 6;
      }
      pcVar7 = pcVar7 + -(int)local_40;
    } while (uVar6 == 0x30);
    local_2c = local_40;
    local_40 = (code *)&DAT_0157d360;
    local_44 = &local_2c;
    uVar5 = FUN_00fa948c(uVar10,uVar11,&DAT_0057f9fc,&local_44);
    if (ppcVar3 != (code **)0x0) {
      thunk_FUN_016d3fb4(pcVar8);
    }
  }
  return uVar5;
}

