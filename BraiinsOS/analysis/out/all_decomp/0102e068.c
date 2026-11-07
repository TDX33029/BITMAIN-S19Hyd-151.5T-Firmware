// FUN_0102e068 @ 0102e068 size=716 calls_out=4 calls_in=21
// strings: 

void FUN_0102e068(int param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint *local_38;
  code *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  iVar7 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar2 = *(uint *)(iVar7 + 0x38);
  if (((uVar5 < uVar2) &&
      (piVar4 = (int *)(*(int *)(iVar7 + 0x34) + uVar5 * 0xf8), *piVar4 != 3 || piVar4[1] != 0)) &&
     (piVar4[0x35] == uVar6)) {
    if (*(byte *)(piVar4 + 8) < 6) {
      iVar3 = piVar4[0x1b];
      bVar8 = iVar3 == 0;
      if (bVar8) {
        iVar3 = piVar4[0x38];
      }
      if (bVar8 && iVar3 == 0) {
        if (((undefined1 *)piVar4[6] == &DAT_3b9aca00) &&
           (local_2c = uVar5, local_28 = uVar6, FUN_0101b1bc(iVar7,uVar6), param_3 != 0)) {
          if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_003832f6,0x32,&DAT_01883048);
          }
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        }
        uVar2 = *(uint *)(iVar7 + 0x38);
        if (((uVar2 <= uVar5) ||
            (piVar4 = (int *)(*(int *)(iVar7 + 0x34) + uVar5 * 0xf8), *piVar4 == 3 && piVar4[1] == 0
            )) || (piVar4[0x35] != uVar6)) goto LAB_0102e30c;
        if ((char)piVar4[0x3a] != '\0') {
          if (uVar6 == 0) {
            local_2c = uVar5;
            local_28 = uVar6;
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00383048,0x1f,&DAT_01882e38,DAT_018dd947);
          }
          if (((uVar6 ^ *(byte *)(param_1 + 0x2c)) & 1) == 0) {
            if (*(int *)(param_1 + 0x14) == 0) {
              local_2c = uVar5;
              local_28 = uVar6;
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_0038321a,0x2b,&DAT_01882fe8);
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              local_2c = uVar5;
              local_28 = uVar6;
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00383245,0x2b,&DAT_01882ff8);
            }
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
          }
          *(undefined1 *)(piVar4 + 0x3a) = 0;
          uVar2 = *(uint *)(iVar7 + 0x38);
        }
      }
    }
    if (((uVar5 < uVar2) &&
        (piVar4 = (int *)(*(int *)(iVar7 + 0x34) + uVar5 * 0xf8), *piVar4 != 3 || piVar4[1] != 0))
       && (piVar4[0x35] == uVar6)) {
      if (*(byte *)(piVar4 + 8) < 6) {
        iVar7 = piVar4[0x1b];
        bVar8 = iVar7 == 0;
        if (bVar8) {
          iVar7 = piVar4[0x38];
        }
        if (bVar8 && iVar7 == 0) {
          uVar2 = piVar4[0x36];
          bVar8 = uVar2 == 0;
          if (bVar8) {
            uVar2 = (uint)*(byte *)((int)piVar4 + 0xe9);
          }
          if (bVar8 && uVar2 == 0) {
            cVar1 = *(char *)((int)piVar4 + 0xea);
            bVar8 = cVar1 == '\0';
            if (bVar8) {
              cVar1 = *(char *)((int)piVar4 + 0xee);
            }
            if (bVar8 && cVar1 == '\0') {
              cVar1 = *(char *)((int)piVar4 + 0xef);
              bVar8 = cVar1 == '\0';
              if (bVar8) {
                cVar1 = (char)piVar4[0x3b];
              }
              if ((bVar8 && cVar1 == '\0') && ((undefined1 *)piVar4[6] == &DAT_3b9aca00)) {
                local_38 = (uint *)*param_2;
                local_34 = (code *)param_2[1];
                local_30 = param_2[2];
                local_2c = uVar5;
                local_28 = uVar6;
                FUN_0101af90(&local_38);
                return;
              }
            }
          }
        }
      }
      return;
    }
  }
LAB_0102e30c:
  local_34 = FUN_0101a4ac;
  local_38 = &local_28;
  local_2c = uVar5;
  local_28 = uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_38,&DAT_01882550);
}

