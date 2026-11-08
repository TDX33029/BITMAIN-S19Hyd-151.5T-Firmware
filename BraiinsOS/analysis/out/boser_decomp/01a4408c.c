// FUN_01a4408c @ 01a4408c size=384 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01a4408c(undefined4 *param_1,undefined4 *param_2)

{
  code cVar1;
  code cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  code **ppcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code **local_48;
  code *local_44;
  int local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  code *local_30;
  int local_2c;
  code **local_28;
  code *local_24;
  
  ppcVar7 = (code **)*param_1;
  uVar10 = *param_2;
  uVar11 = param_2[1];
  local_38 = (int)ppcVar7 + 6;
  local_40 = (int)ppcVar7 + 5;
  local_48 = ppcVar7 + 1;
  local_34 = FUN_012fcc70;
  local_3c = FUN_012fcc70;
  local_44 = FUN_012fcc70;
  iVar4 = FUN_012fa178(uVar10,uVar11,&DAT_0052cfd1,&local_48);
  uVar8 = 1;
  if (iVar4 == 0) {
    if (*ppcVar7 == (code *)0x0) {
      uVar8 = 0;
    }
    else {
      local_24 = FUN_012fd02c;
      local_28 = ppcVar7;
      FUN_00664898(&local_48,&DAT_005702b0,&local_28);
      pcVar3 = local_44;
      iVar4 = local_40;
      do {
        local_2c = iVar4;
        if (local_2c == 0) {
          local_2c = 0;
          break;
        }
        pcVar6 = local_44 + local_2c + -1;
        uVar5 = (uint)(char)*pcVar6;
        if (0x7fffffff < uVar5) {
          pcVar6 = local_44 + local_2c + -2;
          cVar1 = *pcVar6;
          if ((char)cVar1 < -0x40) {
            pcVar6 = local_44 + local_2c + -3;
            cVar2 = *pcVar6;
            if ((char)cVar2 < -0x40) {
              pcVar6 = local_44 + local_2c + -4;
              uVar9 = (int)(char)cVar2 & 0x3fU | ((byte)*pcVar6 & 7) << 6;
            }
            else {
              uVar9 = (byte)cVar2 & 0xf;
            }
            uVar9 = (int)(char)cVar1 & 0x3fU | uVar9 << 6;
          }
          else {
            uVar9 = (byte)cVar1 & 0x1f;
          }
          uVar5 = uVar5 & 0x3f | uVar9 << 6;
        }
        iVar4 = (int)pcVar6 - (int)local_44;
      } while (uVar5 == 0x30);
      local_28 = &local_30;
      local_30 = local_44;
      local_24 = (code *)&LAB_018a13b8;
      uVar8 = FUN_012fa178(uVar10,uVar11,&DAT_005a8e5e,&local_28);
      FUN_0134bd64(local_48,pcVar3);
    }
  }
  return uVar8;
}

