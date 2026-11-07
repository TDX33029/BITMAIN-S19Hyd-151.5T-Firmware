// FUN_0002e084 @ 0002e084  size=640  callers=0
// program: bmminer


float FUN_0002e084(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  int aiStack_98 [6];
  double adStack_80 [2];
  float *local_70;
  int local_6c;
  int local_68;
  int local_64;
  byte local_60 [4];
  undefined4 local_5c [6];
  
  iVar2 = FUN_0002a514();
  iVar1 = -(iVar2 * 4 + 10U & 0xfffffff8);
  pfVar6 = (float *)((int)adStack_80 + iVar1 + 0x10);
  local_70 = pfVar6;
  memset(pfVar6,0,iVar2 * 4);
  local_60[0] = 0;
  local_60[1] = 1;
  local_60[2] = 3;
  local_60[3] = 4;
  local_64 = FUN_0002a514();
  if (0 < local_64) {
    local_68 = (param_2 + param_1 * 0x400) * 4;
    local_6c = (uint)local_60[param_2] << 2;
    iVar2 = 0;
    do {
      local_5c[0] = 1;
      local_5c[1] = 2;
      local_5c[2] = 3;
      local_5c[3] = 4;
      local_5c[4] = 5;
      uVar3 = FUN_0002d208(param_1,0,iVar2,*(undefined4 *)((int)local_5c + local_6c));
      fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = fVar7 * 0.00048828125 * 0.125 - 1.0;
      *pfVar6 = fVar7;
      if (DAT_000c0494 == 0) {
        DAT_000c0494 = FUN_000856dc("bmminer_adc");
      }
      *(int *)((int)adStack_80 + iVar1) = iVar2;
      *(undefined4 *)((int)aiStack_98 + iVar1 + 8) = 0x14;
      *(undefined4 *)((int)aiStack_98 + iVar1) = 0x21;
      *(undefined4 *)((int)aiStack_98 + iVar1 + 4) = 0x35b;
      *(uint *)((int)aiStack_98 + iVar1 + 0x14) = param_2;
      *(int *)((int)aiStack_98 + iVar1 + 0x10) = param_1;
      *(char **)((int)aiStack_98 + iVar1 + 0xc) = "chain%d, domain%d, asic %03d, voltage:%f";
      *(double *)((int)adStack_80 + iVar1 + 8) = (double)fVar7;
      FUN_000875a0(DAT_000c0494,"miner_api/driver-hash-chip.c",0x1c,
                   "get_chain_asic_domain_avg_voltage");
      iVar5 = local_64;
      if (1 < param_2) {
        fVar7 = fVar7 + fVar7;
      }
      iVar4 = local_68 + iVar2 * 0x10;
      iVar2 = iVar2 + 1;
      if (1 < param_2) {
        *pfVar6 = fVar7;
      }
      *(float *)((int)&DAT_000c0498 + iVar4) = fVar7;
      pfVar6 = pfVar6 + 1;
    } while (iVar5 != iVar2);
  }
  iVar2 = FUN_0002a514();
  if (iVar2 < 1) {
    fVar7 = 0.0;
LAB_0002e260:
    fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    if (DAT_000c0494 == 0) {
      DAT_000c0494 = FUN_000856dc("bmminer_adc");
    }
    *(char **)((int)aiStack_98 + iVar1 + 0xc) = "chain%d, domain%d, asic avg voltage:%f";
    *(uint *)((int)aiStack_98 + iVar1 + 0x14) = param_2;
    *(int *)((int)aiStack_98 + iVar1 + 0x10) = param_1;
    *(double *)((int)adStack_80 + iVar1) = (double)(fVar7 / fVar8);
    *(undefined4 *)((int)aiStack_98 + iVar1 + 8) = 0x14;
    *(undefined4 *)((int)aiStack_98 + iVar1) = 0x21;
    *(undefined4 *)((int)aiStack_98 + iVar1 + 4) = 0x36c;
    FUN_000875a0(DAT_000c0494,"miner_api/driver-hash-chip.c",0x1c,
                 "get_chain_asic_domain_avg_voltage");
    return fVar7 / fVar8;
  }
  fVar8 = *local_70;
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar8 != 0.0) {
    fVar7 = 0.0;
    iVar5 = 0;
    pfVar6 = local_70;
    do {
      pfVar6 = pfVar6 + 1;
      iVar5 = iVar5 + 1;
      fVar7 = fVar7 + fVar8;
      if (iVar2 == iVar5) goto LAB_0002e260;
      fVar8 = *pfVar6;
    } while (fVar8 != 0.0);
  }
  return -1.0;
}

