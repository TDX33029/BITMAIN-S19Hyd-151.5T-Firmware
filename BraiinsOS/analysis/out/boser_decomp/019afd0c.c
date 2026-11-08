// FUN_019afd0c @ 019afd0c size=420 calls_out=8 calls_in=5
// strings: 

void FUN_019afd0c(uint *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char local_5c [4];
  short *local_58;
  int local_54;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_3 == (char *)0x0) {
    local_22 = false;
  }
  else {
    local_22 = *param_2 == '/';
  }
  local_38 = (char *)CONCAT31(local_38._1_3_,6);
  local_24 = 0x201;
  local_40 = param_2;
  local_3c = param_3;
  FUN_01982524(local_5c,&local_40);
  if (local_5c[0] == '\t') {
    if ((local_54 != 2) || (*local_58 != 0x2e2e)) {
      iVar1 = local_54;
      do {
        iVar4 = iVar1;
        if (iVar4 == 0) goto LAB_019afe0c;
        iVar1 = iVar4 + -1;
      } while (*(char *)((int)local_58 + iVar4 + -1) != '.');
      if (iVar4 + -1 != 0) {
        pcVar3 = param_3 + -(local_54 - iVar4);
        if (param_3 < (char *)(local_54 - iVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,pcVar3,param_3,&DAT_01d27c0c);
        }
        pcVar5 = pcVar3 + 3;
        param_3 = pcVar3;
        if (pcVar3 == (char *)0xfffffffc || (int)pcVar5 < -1) goto LAB_019afe18;
        goto LAB_019afde4;
      }
    }
  }
LAB_019afe0c:
  pcVar5 = param_3 + 4;
  if (param_3 == (char *)0xfffffffb || (int)pcVar5 < -1) {
LAB_019afe18:
                    /* WARNING: Subroutine does not return */
    FUN_00664730();
  }
LAB_019afde4:
  if (pcVar5 == (char *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_01298504(pcVar5,1);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,pcVar5);
    }
  }
  local_38 = (char *)0x0;
  local_40 = pcVar5;
  local_3c = (char *)uVar2;
  if (pcVar5 < param_3) {
    FUN_0197ac30(&local_40,0,param_3,1,1);
  }
  pcVar5 = local_38;
  FUN_01bed4e2((int)local_3c + (int)local_38,param_2,param_3);
  local_38 = param_3 + (int)pcVar5;
  FUN_0199ec90(&local_40,param_4,3);
  *param_1 = (uint)local_40;
  param_1[1] = (uint)local_3c;
  param_1[2] = (uint)local_38;
  return;
}

