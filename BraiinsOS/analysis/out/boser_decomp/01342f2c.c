// FUN_01342f2c @ 01342f2c size=928 calls_out=3 calls_in=1
// strings: 

void FUN_01342f2c(undefined4 *param_1,uint *param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6,char param_7)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_r3;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_4c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  char local_2c;
  uint local_28;
  
  uVar8 = param_2[4];
  uVar11 = 0x40;
  pcVar9 = (char *)(uVar8 + 0xa90c);
  bVar2 = true;
  uVar12 = 0;
  cVar1 = *(char *)(uVar8 + 0xa90e);
  if (*(byte *)(uVar8 + 0xa90d) == 0) {
    uVar11 = 8;
  }
  if (*(byte *)(uVar8 + 0xa90d) < 2) {
    uVar11 = uVar11 | 1;
  }
  uVar5 = 0xfffffffb;
  *(undefined1 *)(uVar8 + 0xa90e) = 0;
  local_34 = param_6;
  local_38 = param_5;
  if (*pcVar9 == -4) {
LAB_01343068:
    local_4c = 0;
  }
  else {
    if (*pcVar9 < '\0') {
      uVar5 = 0xfffffffd;
      goto LAB_01343068;
    }
    uVar5 = 0xfffffffe;
    local_4c = 0;
    if ((param_7 != '\x04' & *(byte *)(uVar8 + 0xa90f)) == 0) {
      *(byte *)(uVar8 + 0xa90f) = param_7 == '\x04' | *(byte *)(uVar8 + 0xa90f);
      if ((param_7 == '\x04') && (cVar1 != '\0')) {
        FUN_01606674(&local_30,uVar8 + 0x8008,param_3,param_4,param_5,param_6,0,uVar11 | 4);
        bVar2 = true;
        uVar5 = 0xfffffffb;
        *pcVar9 = local_2c;
        local_4c = local_30;
        uVar12 = local_28;
        if (local_2c != -4) {
          if (local_2c < '\0') {
            uVar5 = 0xfffffffd;
          }
          else if (local_2c == '\0') {
            bVar2 = false;
            uVar5 = 1;
          }
          else {
            *pcVar9 = -1;
          }
        }
      }
      else {
        if (param_7 != '\x04') {
          uVar11 = uVar11 | 2;
        }
        if (*(int *)(uVar8 + 0x8004) == 0) {
          local_4c = 0;
          uVar10 = param_4;
          while( true ) {
            FUN_01606674(&local_30,uVar8 + 0x8008,param_3,uVar10,uVar8,0x8000,
                         *(undefined4 *)(uVar8 + 0x8000),uVar11);
            cVar1 = local_2c;
            uVar3 = local_30;
            *pcVar9 = local_2c;
            if (uVar10 < local_30) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(local_30,uVar10,uVar10,&DAT_01d05df0);
            }
            *(uint *)(uVar8 + 0x8004) = local_28;
            local_4c = local_30 + local_4c;
            iVar6 = FUN_01609304(uVar8,&local_38);
            uVar12 = iVar6 + uVar12;
            bVar2 = true;
            uVar5 = 0xfffffffb;
            if (cVar1 == -4) goto LAB_0134306c;
            if (cVar1 < '\0') break;
            if (param_4 == 0 && cVar1 == '\x01') goto LAB_0134306c;
            if (param_7 != '\x04') {
              uVar5 = (uint)(cVar1 == '\0');
              if (uVar10 != uVar3) {
                iVar6 = extraout_r3;
                if (cVar1 != '\0') {
                  uVar5 = 0;
                  iVar6 = local_34;
                }
                if ((cVar1 != '\0' && iVar6 != 0) && (*(int *)(uVar8 + 0x8004) == 0))
                goto LAB_01343148;
              }
              bVar2 = false;
              uVar5 = uVar5 & *(int *)(uVar8 + 0x8004) == 0;
              goto LAB_0134306c;
            }
            if (cVar1 == '\0') {
              uVar5 = 1;
              bVar2 = false;
              if (*(int *)(uVar8 + 0x8004) != 0) {
                uVar5 = 0xfffffffb;
                bVar2 = true;
              }
              goto LAB_0134306c;
            }
            if (local_34 == 0) goto LAB_0134306c;
LAB_01343148:
            param_3 = param_3 + uVar3;
            uVar10 = uVar10 - uVar3;
          }
          uVar5 = 0xfffffffd;
        }
        else {
          uVar12 = FUN_01609304(uVar8,&local_38);
          local_4c = 0;
          bVar2 = false;
          uVar5 = (uint)(*pcVar9 == '\0' && *(int *)(uVar8 + 0x8004) == 0);
        }
      }
    }
  }
LAB_0134306c:
  uVar8 = *param_2;
  uVar11 = param_2[2];
  *param_2 = uVar8 + local_4c;
  param_2[1] = param_2[1] + (uint)CARRY4(uVar8,local_4c);
  param_2[2] = uVar11 + uVar12;
  param_2[3] = param_2[3] + (uint)CARRY4(uVar11,uVar12);
  if (bVar2) {
    uVar7 = 0;
    if (uVar5 != 0xfffffffb) goto LAB_013430c0;
    uVar4 = 1;
  }
  else {
    if (uVar5 != 0) {
      uVar7 = 2;
      *(undefined1 *)(param_1 + 1) = 2;
      goto LAB_013430c0;
    }
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  uVar7 = 2;
LAB_013430c0:
  *param_1 = uVar7;
  return;
}

