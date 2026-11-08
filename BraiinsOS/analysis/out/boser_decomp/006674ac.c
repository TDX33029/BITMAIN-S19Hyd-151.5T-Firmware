// FUN_006674ac @ 006674ac size=348 calls_out=6 calls_in=1
// strings: N/AUnicodeWordBoundaryErrorutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity | N/AUnicodeWordBoundaryErrorutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity | end of range should be a character boundary

void FUN_006674ac(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  
  local_30 = *(int *)(param_1 + 8);
  if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,1,0,&DAT_01c04078);
  }
  if ((local_30 != 1) && ((char)(*(undefined1 **)(param_1 + 4))[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("end of range should be a character boundary",0x57,&DAT_01c04078);
  }
  local_30 = local_30 + -1;
  local_2c = "S";
  *(undefined4 *)(param_1 + 8) = 0;
  local_34 = 1;
  local_3c = 1;
  local_40 = 1;
  local_28 = 
  "N/AUnicodeWordBoundaryErrorutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity"
  ;
  local_38 = param_1;
  if (local_30 == 0) {
    FUN_01445c48(param_1,&local_2c);
  }
  else {
    local_2c = 
    "N/AUnicodeWordBoundaryErrorutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity"
    ;
    **(undefined1 **)(param_1 + 4) = 0x53;
    local_1c = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    local_20 = &DAT_00000001;
    local_24 = 0;
    FUN_01445c48(&local_24,&local_2c);
    iVar7 = local_1c;
    puVar2 = local_20;
    uVar1 = local_24;
    if (local_1c != 0) {
      FUN_015a6e40(&local_40,local_1c);
      iVar4 = *(int *)(local_38 + 8);
      if (local_34 != iVar4) {
        iVar3 = local_34 - iVar4;
        puVar5 = (undefined1 *)(*(int *)(local_38 + 4) + iVar4);
        puVar6 = puVar2;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          *puVar5 = *puVar6;
          iVar3 = iVar3 + -1;
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar3 != 0);
      }
    }
    FUN_0134bd64(uVar1,puVar2);
  }
  FUN_01445cc0(&local_40);
  return;
}

