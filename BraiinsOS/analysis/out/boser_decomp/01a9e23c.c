// FUN_01a9e23c @ 01a9e23c size=500 calls_out=9 calls_in=6
// strings: assertion failed: cnt <= self.limit | buffer underflow | invalid string value: data is not UTF-8 encoded

undefined4 FUN_01a9e23c(char param_1,uint *param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 local_36;
  char local_35;
  undefined1 auStack_34 [12];
  char *local_28;
  code *local_24;
  char *local_20;
  code *local_1c;
  
  local_36 = 2;
  local_35 = param_1;
  if (param_1 == '\x02') {
    piVar5 = (int *)*param_3;
    FUN_01a9d538(&local_28,piVar5);
    if (local_28 != (char *)0x1) {
      pcVar6 = (char *)piVar5[1];
      if ((uint)-(int)local_1c < (uint)(local_20 <= pcVar6)) {
        pcVar1 = (char *)*param_2;
        if (local_20 < pcVar6) {
          pcVar6 = local_20;
        }
        uVar2 = 0;
        param_2[2] = 0;
        if (pcVar1 < pcVar6) {
          FUN_0132b898(param_2,0,pcVar6,1,1);
          pcVar1 = (char *)*param_2;
          uVar2 = param_2[2];
          pcVar6 = (char *)piVar5[1];
          if (local_20 < (char *)piVar5[1]) {
            pcVar6 = local_20;
          }
        }
        if (pcVar1 + -uVar2 < pcVar6) {
          FUN_0132b898(param_2,uVar2,pcVar6,1,1);
          pcVar6 = (char *)piVar5[1];
          if (local_20 < (char *)piVar5[1]) {
            pcVar6 = local_20;
          }
        }
        if (pcVar6 != (char *)0x0) {
          pcVar3 = (char *)*piVar5;
          pcVar1 = local_20;
          do {
            FUN_01ac6cbc(param_2,pcVar3,pcVar6);
            if (pcVar1 < pcVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: cnt <= self.limit",0x23,&DAT_01d2e1dc);
            }
            local_24 = (code *)piVar5[1];
            if (local_24 < pcVar6) {
              local_28 = pcVar6;
                    /* WARNING: Subroutine does not return */
              FUN_01284540(&local_28);
            }
            pcVar4 = (char *)(local_24 + -(int)pcVar6);
            pcVar1 = pcVar1 + -(int)pcVar6;
            pcVar3 = pcVar6 + *piVar5;
            *piVar5 = (int)pcVar3;
            piVar5[1] = (int)pcVar4;
            pcVar6 = pcVar4;
            if (pcVar1 < pcVar4) {
              pcVar6 = pcVar1;
            }
          } while (pcVar6 != (char *)0x0);
        }
        FUN_012fbd94(&local_28,param_2[1],param_2[2]);
        if (local_28 != (char *)0x1) {
          return 0;
        }
        local_24 = (code *)FUN_01aa0da0("invalid string value: data is not UTF-8 encoded",0x2f);
      }
      else {
        local_24 = (code *)FUN_01aa0da0("buffer underflow",0x10);
      }
    }
  }
  else {
    local_20 = &local_36;
    local_1c = FUN_01a9d9b0;
    local_24 = FUN_01a9d9b0;
    local_28 = &local_35;
    FUN_01a924e8(auStack_34,&local_28);
    local_24 = (code *)FUN_01aa428c(auStack_34);
  }
  param_2[2] = 0;
  return local_24;
}

