// FUN_015f68d0 @ 015f68d0 size=492 calls_out=3 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f6944) */
/* WARNING: Removing unreachable block (ram,0x015f694c) */
/* WARNING: Removing unreachable block (ram,0x015f6a6c) */
/* WARNING: Removing unreachable block (ram,0x015f6958) */
/* WARNING: Removing unreachable block (ram,0x015f6964) */

void FUN_015f68d0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined2 local_1b4;
  uint local_1b0;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  char local_1a0 [380];
  
  param_1 = (undefined4 *)*param_1;
  puVar5 = (undefined4 *)*param_1;
  puVar7 = (uint *)param_1[1];
  *param_1 = 0;
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ab078);
  }
  local_1c0 = 0;
  uStack_1bc = 0x1b6;
  local_1b8 = 1;
  local_1b4 = 0;
  builtin_strncpy(local_1a0,"ndom",5);
  local_1a4 = 0x6172752f;
  local_1a8 = 0x7665642f;
  iVar3 = 0;
  do {
    if (local_1a0[iVar3] == '\0') {
      if (iVar3 == 4) {
        FUN_015c49ac(&local_1b0,&local_1a8,&local_1c0);
        if ((char)local_1b0 == '\x04') goto LAB_015f6aa4;
        goto LAB_015f69f0;
      }
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  local_1b0 = 2;
  local_1ac = &DAT_018aae48;
LAB_015f69f0:
  puVar2 = local_1ac;
  uVar1 = local_1b0;
  if ((local_1b0 & 0xff) != 4) {
    if (((char)*puVar7 != '\x04') && ((char)*puVar7 == '\x03')) {
      puVar6 = (undefined4 *)puVar7[1];
      puVar5 = (undefined4 *)puVar6[1];
      uVar8 = *puVar6;
      pcVar4 = (code *)*puVar5;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar8);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
      thunk_FUN_016d3fb4(puVar6);
    }
    *puVar7 = uVar1;
    *param_2 = 2;
    puVar7[1] = (uint)puVar2;
    return;
  }
LAB_015f6aa4:
  *puVar5 = local_1ac;
  return;
}

