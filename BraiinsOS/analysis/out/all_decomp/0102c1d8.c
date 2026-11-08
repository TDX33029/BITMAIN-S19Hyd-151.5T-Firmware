// FUN_0102c1d8 @ 0102c1d8 size=528 calls_out=5 calls_in=2
// strings: assertion failed: self.ref_count < usize::MAXheader_table_sizeenable_pushmax_concurrent_streamsinitial_window_sizemax_frame_sizemax_header_list_sizeenable_connect_protocolACK

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0102c1d8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int local_2c;
  int *local_28;
  code *local_24;
  
  piVar8 = (int *)*param_2;
  piVar7 = piVar8 + 2;
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_0102c208;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_0102c208:
  uVar9 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)piVar8[3];
  }
  else {
    uVar9 = FUN_015bf3f8();
    uVar9 = uVar9 ^ 1;
    cVar2 = (char)piVar8[3];
  }
  if (cVar2 != '\0') {
    uVar4 = (uint)local_24 >> 8;
    local_24 = (code *)CONCAT31((int3)uVar4,(char)uVar9);
    local_28 = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01882f54,&DAT_01882f74);
  }
  uVar4 = param_2[1];
  local_2c = param_2[2];
  if ((((uint)piVar8[0x66] <= uVar4) ||
      (piVar5 = (int *)(piVar8[0x65] + uVar4 * 0xf8), *piVar5 == 3 && piVar5[1] == 0)) ||
     (piVar5[0x35] != local_2c)) {
    local_28 = &local_2c;
    local_24 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_28,&DAT_01882560);
  }
  if (0xfffffffe < (uint)piVar5[0x36]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.ref_count < usize::MAXheader_table_sizeenable_pushmax_concurrent_streamsinitial_window_sizemax_frame_sizemax_header_list_sizeenable_connect_protocolACK"
                 ,0x2d,&DAT_01882c80);
  }
  piVar5[0x36] = piVar5[0x36] + 1;
  piVar8[0x6a] = piVar8[0x6a] + 1;
  do {
    iVar6 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x102c3ec);
    (*pcVar1)();
  }
  *param_1 = piVar8;
  param_1[1] = uVar4;
  param_1[2] = local_2c;
  if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = 0;
  if (iVar6 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar7,0x81,1,param_5);
    return;
  }
  return;
}

