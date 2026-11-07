// FUN_014bcea4 @ 014bcea4 size=772 calls_out=8 calls_in=3
// strings: peer closed connection without sending TLS close_notify: https://docs.rs/rustls/latest/rustls/manual/_03_howto/index.html#unexpected-eof

void FUN_014bcea4(uint *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  uint local_2c;
  undefined4 *local_28;
  
  puVar9 = (undefined4 *)param_4[1];
  puVar11 = (undefined4 *)param_4[2];
  if (puVar9 < puVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(puVar11,puVar9,puVar9,&DAT_018a5e10);
  }
  bVar1 = *(byte *)(param_2 + 0x2e0);
  uVar2 = (uint)bVar1;
  iVar5 = *param_4;
  uVar8 = 0;
  iVar6 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  default:
    bVar12 = (bVar1 & 1) == 0;
    if (bVar12) {
      uVar2 = *(uint *)(param_2 + 0x1fc);
    }
    if (bVar12 && uVar2 == 0) {
      while ((*(char *)(param_2 + 0x267) == '\0' &&
             ((*(char *)(param_2 + 0x262) != '\0' || (*(int *)(param_2 + 0x218) == 0))))) {
        FUN_014bd9a0(&local_2c,param_2,param_2 + 0x10,param_3);
        if ((local_2c & 0xff) != 4) {
          uVar8 = 1;
          if ((local_2c & 0xff) == 5) goto LAB_014bcf0c;
          uVar2 = local_2c;
          puVar11 = local_28;
          goto LAB_014bd0f8;
        }
        if ((local_28 == (undefined4 *)0x0) || (*(int *)(param_2 + 0x1fc) != 0)) break;
      }
      uVar8 = 0;
    }
LAB_014bcf0c:
    if (*(int *)(param_2 + 0x1fc) == 0) {
      if (*(char *)(param_2 + 0x267) == '\0') {
        if (*(char *)(param_2 + 0x268) == '\0') {
          local_2c = CONCAT22(local_2c._2_2_,0xd01);
LAB_014bd064:
          uVar2 = local_2c;
          uVar3 = local_2c & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar3) {
          case 0:
            uVar4 = FUN_005bc530(puVar11);
            uVar4 = uVar4 & 0xff;
            break;
          case 1:
            uVar4 = local_2c >> 8;
            break;
          default:
            uVar4 = (uint)*(byte *)(puVar11 + 2);
          }
          if ((uVar4 & 0xff) == 0xd) {
            if (uVar8 == 0) {
              (**(code **)(*(int *)*param_3 + 8))(((int *)*param_3)[1]);
            }
            if (uVar3 < 3) {
              *param_1 = 5;
              param_1[1] = (uint)puVar11;
              return;
            }
            puVar9 = (undefined4 *)puVar11[1];
            uVar10 = *puVar11;
            pcVar7 = (code *)*puVar9;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(uVar10);
            }
            if (puVar9[1] != 0) {
              thunk_FUN_016d3fb4(uVar10);
            }
            thunk_FUN_016d3fb4(puVar11);
            *param_1 = 5;
            param_1[1] = (uint)puVar11;
            return;
          }
LAB_014bd0f8:
          uVar8 = uVar2 >> 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar2 & 0xff) {
          case 0:
            uVar8 = FUN_005bc530(puVar11);
            uVar8 = uVar8 & 0xff;
            break;
          case 1:
            break;
          default:
            uVar8 = (uint)*(byte *)(puVar11 + 2);
          }
          if ((uVar8 & 0xff) == 6) {
            *(byte *)(param_2 + 0x2e0) = *(byte *)(param_2 + 0x2e0) | 1;
          }
          *param_1 = uVar2;
          param_1[1] = (uint)puVar11;
          return;
        }
        FUN_015e79d4(&local_2c,0x25,
                     "peer closed connection without sending TLS close_notify: https://docs.rs/rustls/latest/rustls/manual/_03_howto/index.html#unexpected-eof"
                     ,0x88);
        if ((char)local_2c != '\x04') {
          puVar11 = local_28;
          goto LAB_014bd064;
        }
      }
      uVar8 = 0;
      iVar6 = 1;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x200);
      uVar8 = *(uint *)(param_2 + 0x1f8);
      uVar2 = uVar8 - *(uint *)(param_2 + 0x1f0);
      if (uVar8 < *(uint *)(param_2 + 0x1f0)) {
        uVar2 = uVar8;
      }
      iVar6 = *(int *)(param_2 + 500) + uVar2 * 0xc;
      uVar8 = *(uint *)(iVar6 + 8);
      if (uVar8 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar3,uVar8,uVar8,&DAT_018a8b58);
      }
      uVar8 = uVar8 - uVar3;
      iVar6 = *(int *)(iVar6 + 4) + uVar3;
      if (uVar8 != 0) break;
    }
    *(byte *)(param_2 + 0x2e0) = *(byte *)(param_2 + 0x2e0) | 1;
    break;
  case 1:
  case 3:
    break;
  }
  if ((uint)((int)puVar9 - (int)puVar11) < uVar8) {
    uVar8 = (int)puVar9 - (int)puVar11;
  }
  FUN_016dd1aa(iVar5 + (int)puVar11,iVar6,uVar8);
  FUN_0156ae58(param_2 + 0x1e8,uVar8);
  uVar2 = uVar8 + (int)puVar11;
  if (CARRY4(uVar8,(uint)puVar11)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_018a5e00);
  }
  uVar8 = param_4[3];
  *(undefined1 *)param_1 = 4;
  if (uVar8 <= uVar2) {
    uVar8 = uVar2;
  }
  param_4[2] = uVar2;
  param_4[3] = uVar8;
  return;
}

