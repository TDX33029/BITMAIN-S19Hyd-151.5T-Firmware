// FUN_013242d8 @ 013242d8 size=644 calls_out=5 calls_in=2
// strings: 

void FUN_013242d8(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68 [2];
  uint local_60;
  byte local_5b;
  char local_5a;
  int local_44;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  FUN_01306b30(local_68,param_2,param_3,&DAT_0043191e,2);
  if (local_68[0] == 1) {
    FUN_0140d6f0(&local_74,&local_60,local_38,local_34,uStack_30,local_2c,local_44 == -1);
  }
  else {
    local_74 = 0;
    if (local_5a == '\0') {
      if (local_60 == 0) {
        local_60 = 0;
        local_74 = local_60;
        if ((local_5b & 1) == 0) goto LAB_0132444c;
      }
      else {
        do {
          pcVar5 = (char *)(local_38 + local_60);
          if (local_60 < local_34) {
            if (*pcVar5 < -0x40) goto LAB_01324548;
          }
          else if (local_60 != local_34) {
LAB_01324548:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,0,local_60,&DAT_01d272d4);
          }
          uVar7 = (uint)pcVar5[-1];
          if (0x7fffffff < uVar7) {
            bVar1 = pcVar5[-2];
            if ((char)bVar1 < -0x40) {
              bVar2 = pcVar5[-3];
              if ((char)bVar2 < -0x40) {
                uVar6 = (int)(char)bVar2 & 0x3fU | ((byte)pcVar5[-4] & 7) << 6;
              }
              else {
                uVar6 = bVar2 & 0xf;
              }
              uVar6 = (int)(char)bVar1 & 0x3fU | uVar6 << 6;
            }
            else {
              uVar6 = bVar1 & 0x1f;
            }
            uVar7 = uVar7 & 0x3f | uVar6 << 6;
          }
          if ((local_5b & 1) != 0) goto LAB_0132443c;
          iVar4 = -1;
          if (0x7f < uVar7) {
            iVar4 = -2;
          }
          if ((0x7ff < uVar7) && (iVar4 = -4, uVar7 < 0x10000)) {
            iVar4 = -3;
          }
          local_60 = iVar4 + local_60;
          local_5b = 1;
        } while (local_60 != 0);
        local_60 = 0;
      }
LAB_0132443c:
      local_74 = 1;
      local_70 = local_60;
      local_6c = local_60;
    }
  }
LAB_0132444c:
  uVar7 = local_70;
  if (local_74 == 1) {
    uVar8 = FUN_013245a0(param_2 + local_6c,param_3 - local_6c);
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    if ((iVar4 == 0) || (*(char *)((int)uVar8 + iVar4 + -1) != '>')) {
      *param_1 = 0;
      uVar3 = 0x10;
      goto LAB_01324508;
    }
    uVar9 = FUN_013245a0(param_2,uVar7);
    param_3 = iVar4 - 1;
    param_2 = (int)uVar8;
  }
  else {
    uVar9 = 1;
  }
  uVar7 = param_3;
  do {
    uVar10 = FUN_01307268(0x40,param_2,uVar7);
    uVar7 = (uint)(uVar10 >> 0x20);
    if ((uVar10 & 1) == 0) break;
    if ((uVar7 < param_3) && (*(char *)(param_2 + uVar7) == '@')) {
      *(char *)(param_1 + 1) = (char)(uVar10 >> 0x20);
      *(char *)((int)param_1 + 7) = (char)(uVar10 >> 0x38);
      *(short *)((int)param_1 + 5) = (short)(uVar10 >> 0x28);
      *param_1 = param_2;
      param_1[2] = param_2 + uVar7 + 1;
      param_1[3] = param_3 - (uVar7 + 1);
      *(undefined8 *)(param_1 + 4) = uVar9;
      return;
    }
  } while (uVar7 <= param_3);
  *param_1 = 0;
  uVar3 = 1;
LAB_01324508:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}

