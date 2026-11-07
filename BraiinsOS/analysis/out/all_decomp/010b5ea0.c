// FUN_010b5ea0 @ 010b5ea0 size=508 calls_out=6 calls_in=3
// strings: 

void FUN_010b5ea0(int *param_1,char param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_50;
  int *local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  char local_40;
  int *local_38;
  undefined4 *local_34;
  undefined1 local_30;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  
  if (param_2 == '\x02') {
    local_30 = 2;
    local_50 = 0;
    local_40 = '\x01';
    local_48 = local_20;
    local_4c = param_3;
LAB_010b5fec:
    piVar2 = local_4c;
    if (local_50 == 0) {
      iVar7 = *local_4c;
      if (iVar7 != 0) {
        puVar8 = (undefined4 *)local_4c[1];
        pcVar5 = (code *)*puVar8;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar7);
        }
        if (puVar8[1] != 0) {
          thunk_FUN_016d3fb4(iVar7);
        }
      }
      thunk_FUN_016d3fb4(piVar2);
      FUN_0064c7d0(&local_38);
      return;
    }
    (**(code **)(local_50 + 0x10))(local_44,local_4c,local_48);
LAB_010b6010:
    FUN_0064c7d0(&local_38);
    return;
  }
  uVar6 = param_1[8];
  puVar4 = (uint *)(param_1 + 8);
  DataMemoryBarrier(0xb);
  while( true ) {
    if (uVar6 == (param_1[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00408941,0x35,&DAT_018a4cd8);
    }
    uVar3 = *puVar4;
    if (*puVar4 == uVar6) break;
LAB_010b5f04:
    uVar6 = uVar3;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
LAB_010b5f40:
  bVar1 = (bool)hasExclusiveAccess(puVar4);
  if (!bVar1) goto code_r0x010b5f4c;
  *puVar4 = uVar6 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar7 + 1;
  if (iVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xfdee,0x10b609c);
    (*pcVar5)();
  }
  local_34 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
  if (local_34 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  *(undefined1 *)(local_34 + 6) = 0;
  local_34[4] = 0;
  *(undefined1 *)(local_34 + 3) = 0;
  *local_34 = 1;
  local_34[1] = 1;
  local_34[2] = 0;
  local_30 = 0;
  local_28 = 0;
  local_38 = param_1;
  local_24 = param_3;
  FUN_010b7ed8(&local_50,&local_38,&local_28);
  if (local_40 == '\x02') goto LAB_010b6010;
  goto LAB_010b5fec;
code_r0x010b5f4c:
  uVar3 = *puVar4;
  if (*puVar4 != uVar6) goto LAB_010b5f04;
  goto LAB_010b5f40;
}

