// FUN_00911fb0 @ 00911fb0 size=380 calls_out=4 calls_in=2
// strings: BUG: impossible

undefined4 FUN_00911fb0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  int local_28;
  code *local_24;
  int local_20;
  code *local_1c;
  int local_18;
  code *local_14;
  
  puVar4 = auStack_40;
  if (*(char *)(param_1 + 0x21) == '\x01') {
    cVar1 = FUN_010e1310(param_1,param_2);
    local_18 = param_2 + 0x18;
    if ((-1 < cVar1) && (cVar1 = FUN_010e1310(param_1,local_18), cVar1 < '\x01')) {
      return 0;
    }
    puVar3 = &DAT_0057a7c6;
    puVar4 = auStack_34;
    local_14 = (code *)&LAB_010e14c0;
    local_1c = (code *)&LAB_010e14c0;
    local_24 = (code *)&LAB_010e14c0;
    local_28 = param_1;
    local_20 = param_2;
    goto LAB_009120c8;
  }
  dVar5 = *(double *)(param_1 + 0x18);
  if (NAN(dVar5)) {
    if (NAN(*(double *)(param_2 + 0x50))) {
      return 0;
    }
  }
  else {
    dVar6 = *(double *)(param_2 + 0x48);
    if (!NAN(dVar6)) {
      if (dVar5 <= dVar6) {
        if (dVar5 < dVar6) goto LAB_00912094;
      }
      else if (dVar5 < dVar6) goto LAB_00912044;
      if (dVar5 <= *(double *)(param_2 + 0x50)) {
        return 0;
      }
      if (dVar5 < *(double *)(param_2 + 0x50)) {
LAB_00912044:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
      }
    }
  }
LAB_00912094:
  local_28 = param_1 + 0x18;
  local_20 = param_2 + 0x48;
  local_18 = param_2 + 0x50;
  puVar3 = &DAT_00579070;
  local_14 = FUN_00f5c774;
  local_1c = FUN_00f5c774;
  local_24 = FUN_00f5c774;
LAB_009120c8:
  FUN_00600d2c(puVar4,puVar3,&local_28);
  uVar2 = FUN_009337e4(puVar4);
  return uVar2;
}

