// FUN_015c5480 @ 015c5480 size=856 calls_out=9 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x015c55cc) */
/* WARNING: Removing unreachable block (ram,0x015c55d4) */
/* WARNING: Removing unreachable block (ram,0x015c5630) */
/* WARNING: Removing unreachable block (ram,0x015c55e0) */
/* WARNING: Removing unreachable block (ram,0x015c55ec) */

void FUN_015c5480(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined2 local_1bc;
  uint local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1ac;
  undefined4 local_1a8;
  char local_1a4;
  char cStack_1a3;
  char cStack_1a2;
  uint local_178;
  int local_174;
  
  local_1c4 = 0x1b6;
  local_1c0 = 1;
  local_1ac = &local_1c8;
  local_1c8 = 0;
  local_1bc = 0;
  if (param_3 >> 7 < 3) {
    FUN_016dd1aa(&local_1a8,param_2,param_3);
    *(undefined1 *)((int)&local_1a8 + param_3) = 0;
    if (6 < param_3) {
      uVar2 = 0;
      do {
        uVar6 = *(uint *)((int)&local_1a8 + uVar2);
        if (((0x1010100 - uVar6 | uVar6) & 0x80808080 &
            (0x1010100 - *(uint *)(&local_1a4 + uVar2) | *(uint *)(&local_1a4 + uVar2))) !=
            0x80808080) break;
        uVar2 = uVar2 + 8;
      } while (uVar2 <= param_3 - 7);
      if (param_3 + 1 != uVar2) {
        iVar3 = 0;
        do {
          if (*(char *)((int)&local_1a8 + iVar3 + uVar2) == '\0') {
            uVar2 = iVar3 + uVar2;
            goto LAB_015c5664;
          }
          iVar3 = iVar3 + 1;
        } while ((param_3 + 1) - uVar2 != iVar3);
      }
LAB_015c568c:
      local_1b8 = 2;
      local_1b4 = &DAT_018aae48;
      bVar8 = true;
      goto joined_r0x015c56d4;
    }
    if ((char)local_1a8 == '\0') {
      uVar2 = 0;
    }
    else {
      if (param_3 == 0) goto LAB_015c568c;
      if (local_1a8._1_1_ == '\0') {
        uVar2 = 1;
      }
      else {
        if (param_3 == 1) goto LAB_015c568c;
        if (local_1a8._2_1_ == '\0') {
          uVar2 = 2;
        }
        else {
          if (param_3 == 2) goto LAB_015c568c;
          if (local_1a8._3_1_ == '\0') {
            uVar2 = 3;
          }
          else {
            if (param_3 == 3) goto LAB_015c568c;
            if (local_1a4 == '\0') {
              uVar2 = 4;
            }
            else {
              if (param_3 == 4) goto LAB_015c568c;
              if (cStack_1a3 == '\0') {
                uVar2 = 5;
              }
              else if ((param_3 == 5) || (uVar2 = 6, cStack_1a2 != '\0')) goto LAB_015c568c;
            }
          }
        }
      }
    }
LAB_015c5664:
    if (uVar2 != param_3) goto LAB_015c568c;
    FUN_015c49ac(&local_1b8,&local_1a8,&local_1c8);
    if ((char)local_1b8 == '\x04') goto LAB_015c56f0;
  }
  else {
    FUN_015e69ec(&local_1b8,param_2,param_3,&local_1ac);
    bVar8 = (char)local_1b8 != '\x04';
joined_r0x015c56d4:
    if (!bVar8) goto LAB_015c56f0;
  }
  puVar1 = local_1b4;
  if ((local_1b8 & 0xff) == 4) {
    if (local_1b4 != (undefined4 *)0xffffffff) {
LAB_015c56f0:
      puVar1 = local_1b4;
      FUN_016dd606(&local_1a8,0,0x68);
      iVar3 = FUN_016e03d2(puVar1,&local_1a8);
      if (iVar3 == -1) {
        FUN_016d2bc8();
      }
      else if (local_174 == 0) {
        uVar2 = FUN_016d69b4(0,local_178,1,2,puVar1);
        if (uVar2 != 0xffffffff) {
          param_1[1] = uVar2;
          param_1[2] = local_178;
        }
        *param_1 = (uint)(uVar2 != 0xffffffff);
        FUN_016dffb2(puVar1);
        return;
      }
      *param_1 = 0;
      FUN_016dffb2(puVar1);
      return;
    }
  }
  else if ((local_1b8 & 0xff) == 3) {
    uVar5 = *local_1b4;
    puVar7 = (undefined4 *)local_1b4[1];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    thunk_FUN_016d3fb4(puVar1);
  }
  *param_1 = 0;
  return;
}

