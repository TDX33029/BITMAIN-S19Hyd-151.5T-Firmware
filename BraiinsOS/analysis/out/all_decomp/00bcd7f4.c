// FUN_00bcd7f4 @ 00bcd7f4 size=1568 calls_out=13 calls_in=0
// strings: 

void FUN_00bcd7f4(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  undefined *local_a8;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_58;
  int local_54;
  uint local_4c;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 *local_30;
  code *local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x104)) {
  case 0:
    iVar8 = *(int *)(*(int *)(param_2 + 0x20) + 0x2ec);
    *(undefined2 *)(param_2 + 3) = 0;
    param_2[1] = *param_2;
    *(int *)((int)param_2 + 0x14) = iVar8 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871d38);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871d38);
  }
  FUN_00bd377c(&local_70,param_2 + 1);
  uVar11 = local_6c;
  uVar3 = local_70;
  if ((char)local_70 == '\x02') {
    *param_1 = 2;
    *(undefined1 *)((int)param_2 + 0x104) = 3;
    return;
  }
  uVar5 = local_70._3_1_;
  cVar2 = *(char *)(param_2 + 3);
  uVar4 = local_70._1_2_;
  if (cVar2 == '\x05') {
    FUN_00bcb384(param_2 + 4);
  }
  else if (cVar2 == '\x04') {
    FUN_00bce158(param_2 + 4);
  }
  else if (cVar2 == '\x03') {
    FUN_00bcdee0(param_2 + 4);
  }
  uVar7 = 0;
  if ((uVar3 & 1) == 0) goto LAB_00bcdc7c;
  local_74 = uVar11;
  local_2c = FUN_00604528;
  local_30 = &local_74;
  FUN_00600d2c(&local_70,&DAT_00414b9a,&local_30);
  uVar6 = local_6c;
  uVar3 = local_70;
  if (local_68 < 0xc) {
    uVar11 = local_74;
    if (local_68 == 0xb) {
      puVar10 = (undefined4 *)thunk_FUN_016dd50a(&DAT_0035201f,local_6c,0xb);
joined_r0x00bcda08:
      uVar11 = local_74;
      if (puVar10 == (undefined4 *)0x0) {
LAB_00bcda1c:
        local_6c = local_74;
        local_70 = 10;
        uVar11 = FUN_00c79b64(&local_70);
      }
    }
  }
  else {
    FUN_00fb6cfc(&local_70,local_6c,local_68,&DAT_0035201f,0xb);
    if (local_70 == 0) {
      do {
        FUN_00bd41dc(&local_30,&local_70);
        puVar10 = local_30;
      } while (local_30 == (undefined4 *)&DAT_00000001);
      goto joined_r0x00bcda08;
    }
    iVar8 = local_34 - 1;
    uVar11 = local_74;
    if (local_4c == 0xffffffff) {
      uVar9 = local_54 + iVar8;
      if (uVar9 < local_3c) {
        uVar12 = local_34;
        if (local_34 < local_60) {
          uVar12 = local_60;
        }
        uVar13 = local_60 - 1;
        if (uVar13 < local_34) {
          local_a8 = &DAT_018aeb20;
LAB_00bcdcbc:
          do {
            uVar14 = *(byte *)(local_40 + uVar9) & 0x3f;
            uVar9 = local_68 >> uVar14 | uStack_64 << (0x20 - uVar14 & 0xff);
            if (-1 < (int)(uVar14 - 0x20)) {
              uVar9 = uStack_64 >> (uVar14 - 0x20 & 0xff);
            }
            if ((uVar9 & 1) == 0) {
              uVar9 = local_34;
              goto LAB_00bcdca8;
            }
            uVar9 = local_60;
            do {
              uVar14 = uVar9;
              if (uVar12 == uVar14) {
                uVar14 = uVar13 + local_54;
                pcVar15 = (char *)(local_38 + uVar13);
                uVar9 = local_60;
                goto LAB_00bcdd54;
              }
              if (local_3c <= local_54 + uVar14) goto LAB_00bcddf0;
              uVar9 = uVar14 + 1;
            } while (*(char *)(local_38 + uVar14) == *(char *)(local_40 + local_54 + uVar14));
            local_54 = local_54 + (1 - local_60) + uVar14;
            uVar9 = local_54 + iVar8;
          } while (uVar9 < local_3c);
          goto joined_r0x00bcdc6c;
        }
        do {
          uVar14 = *(byte *)(local_40 + uVar9) & 0x3f;
          uVar9 = local_68 >> uVar14 | uStack_64 << (0x20 - uVar14 & 0xff);
          if (-1 < (int)(uVar14 - 0x20)) {
            uVar9 = uStack_64 >> (uVar14 - 0x20 & 0xff);
          }
          if ((uVar9 & 1) == 0) {
            local_54 = local_54 + local_34;
          }
          else {
            uVar9 = local_60;
            do {
              uVar14 = uVar9;
              if (uVar12 == uVar14) {
                if (local_60 == 0) goto LAB_00bcda1c;
                local_a8 = &DAT_018aeb10;
                local_3c = local_34;
                goto LAB_00bcde0c;
              }
              if (local_3c <= local_54 + uVar14) goto LAB_00bcddf0;
              uVar9 = uVar14 + 1;
            } while (*(char *)(local_38 + uVar14) == *(char *)(local_40 + local_54 + uVar14));
            local_54 = local_54 + (1 - local_60) + uVar14;
          }
          uVar9 = local_54 + iVar8;
        } while (uVar9 < local_3c);
      }
    }
    else {
      uVar9 = local_54 + iVar8;
      if (uVar9 < local_3c) {
        local_a8 = &DAT_018aeb10;
LAB_00bcda60:
        do {
          uVar12 = *(byte *)(local_40 + uVar9) & 0x3f;
          uVar9 = local_68 >> uVar12 | uStack_64 << (0x20 - uVar12 & 0xff);
          if (-1 < (int)(uVar12 - 0x20)) {
            uVar9 = uStack_64 >> (uVar12 - 0x20 & 0xff);
          }
          if ((uVar9 & 1) == 0) {
            local_54 = local_54 + local_34;
          }
          else {
            uVar13 = local_60;
            if (local_60 < local_4c) {
              uVar13 = local_4c;
            }
            uVar9 = local_34;
            if (local_34 < uVar13) {
              uVar9 = uVar13;
            }
            uVar12 = uVar13;
            do {
              uVar14 = uVar12;
              if (uVar9 == uVar14) {
                uVar13 = local_60;
                goto LAB_00bcdb08;
              }
              if (local_3c <= local_54 + uVar14) {
                uVar13 = uVar13 + local_54;
                goto LAB_00bcde04;
              }
              uVar12 = uVar14 + 1;
            } while (*(char *)(local_38 + uVar14) == *(char *)(local_40 + local_54 + uVar14));
            local_54 = (local_54 - local_60) + uVar14 + 1;
          }
          uVar9 = local_54 + iVar8;
          local_4c = 0;
        } while (uVar9 < local_3c);
      }
    }
  }
joined_r0x00bcdc6c:
  if (uVar3 != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  uVar7 = 1;
LAB_00bcdc7c:
  *param_1 = uVar7;
  *(undefined2 *)(param_1 + 1) = uVar4;
  param_1[3] = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar11;
  *(undefined1 *)((int)param_2 + 0x104) = 1;
  return;
  while( true ) {
    if (local_3c <= uVar14) {
      uVar13 = uVar14;
      goto LAB_00bcde0c;
    }
    pcVar1 = (char *)(local_40 + uVar14);
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar15;
    uVar14 = uVar14 - 1;
    pcVar15 = pcVar15 + -1;
    if (cVar2 != *pcVar1) break;
LAB_00bcdd54:
    if (uVar9 == 0) goto LAB_00bcda1c;
  }
  uVar9 = local_58;
LAB_00bcdca8:
  local_54 = local_54 + uVar9;
  uVar9 = local_54 + iVar8;
  if (local_3c <= uVar9) goto joined_r0x00bcdc6c;
  goto LAB_00bcdcbc;
  while( true ) {
    uVar13 = uVar13 - 1;
    if (local_34 <= uVar13) {
      local_3c = local_34;
      goto LAB_00bcde0c;
    }
    uVar9 = uVar13 + local_54;
    if (local_3c <= uVar9) {
      local_a8 = &DAT_018aeb20;
      uVar13 = uVar9;
      goto LAB_00bcde0c;
    }
    if (*(char *)(local_38 + uVar13) != *(char *)(local_40 + uVar9)) break;
LAB_00bcdb08:
    if (uVar13 <= local_4c) goto LAB_00bcda1c;
  }
  local_54 = local_54 + local_58;
  uVar9 = local_54 + iVar8;
  local_4c = local_34 - local_58;
  if (local_3c <= uVar9) goto joined_r0x00bcdc6c;
  goto LAB_00bcda60;
LAB_00bcddf0:
  uVar13 = local_54 + local_60;
LAB_00bcde04:
  local_a8 = &DAT_018aeb30;
  if (uVar13 < local_3c) {
    uVar13 = local_3c;
  }
LAB_00bcde0c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar13,local_3c,local_a8);
}

