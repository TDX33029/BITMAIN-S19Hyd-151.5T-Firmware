// FUN_010e1de8 @ 010e1de8 size=808 calls_out=6 calls_in=2
// strings: ProtoTime | unix_millis

/* WARNING: Removing unreachable block (ram,0x010e1f9c) */

code * FUN_010e1de8(char param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint ***pppuVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *****pppppuVar7;
  bool bVar8;
  undefined4 *****pppppuVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint ***local_60;
  code *local_5c;
  undefined4 ***local_58;
  undefined4 local_54;
  undefined4 ****local_4c;
  code *local_48;
  undefined4 ****appppuStack_44 [3];
  uint ****local_38;
  code *local_34;
  uint ***local_30;
  code *local_2c;
  
  local_4c = (undefined4 ****)CONCAT31(local_4c._1_3_,param_1);
  local_58 = (undefined4 ***)CONCAT31(local_58._1_3_,2);
  if (param_1 != '\x02') {
    local_30 = (uint ***)&local_58;
    local_34 = FUN_010e1dac;
    local_38 = (uint ****)&local_4c;
    puVar6 = &DAT_00583633;
    local_2c = FUN_010e1dac;
LAB_010e2028:
    pppppuVar9 = appppuStack_44;
    pppppuVar7 = &local_38;
LAB_010e2034:
    FUN_00600d2c(pppppuVar9,puVar6,pppppuVar7);
    pcVar3 = (code *)FUN_010e9978(pppppuVar9);
    return pcVar3;
  }
  iVar10 = *param_3;
  FUN_010e45d8(&local_38,iVar10);
  if (local_38 == (uint ****)&DAT_00000001) {
    return local_34;
  }
  pppuVar4 = *(uint ****)(iVar10 + 4);
  if ((uint)(local_30 <= pppuVar4) <= (uint)-(int)local_2c) {
    pcVar3 = (code *)FUN_010e98c8(&DAT_005649b0,0x10,-(int)(local_2c + (local_30 > pppuVar4)),
                                  (int)pppuVar4 - (int)local_30);
    return pcVar3;
  }
  uVar12 = (int)pppuVar4 - (int)local_30;
  uVar11 = *param_2;
LAB_010e1e84:
  do {
    if (*(uint *)(iVar10 + 4) <= uVar12) {
      if (*(uint *)(iVar10 + 4) == uVar12) {
        return (code *)0x0;
      }
      pcVar3 = (code *)FUN_010e98c8(&DAT_00387eae,0x19);
      return pcVar3;
    }
    FUN_010e45d8(&local_38,iVar10);
    if (local_38 == (uint ****)&DAT_00000001) {
      return local_34;
    }
    local_60 = local_30;
    local_5c = local_2c;
    if (local_2c != (code *)0x0) {
      local_38 = &local_60;
      local_34 = FUN_00fac4cc;
      puVar6 = &DAT_005918e8;
      goto LAB_010e2028;
    }
    local_58 = (undefined4 ***)((uint)local_30 & 7);
    local_54 = 0;
    bVar8 = true;
    uVar2 = 0;
    switch(local_58) {
    case (undefined4 ***)0x0:
      goto switchD_010e1ee0_caseD_0;
    case (undefined4 ***)0x1:
      uVar2 = 1;
      break;
    case (undefined4 ***)0x2:
      uVar2 = 2;
      break;
    case (undefined4 ***)0x3:
      uVar2 = 3;
      break;
    case (undefined4 ***)0x4:
      uVar2 = 4;
      break;
    case (undefined4 ***)0x5:
      uVar2 = 5;
      break;
    default:
      local_4c = &local_58;
      pppppuVar9 = &local_38;
      puVar6 = &DAT_005976bb;
      local_48 = FUN_00fac4cc;
      pppppuVar7 = &local_4c;
      goto LAB_010e2034;
    }
    bVar8 = false;
switchD_010e1ee0_caseD_0:
    uVar1 = (uint)local_30 >> 3;
    if (uVar1 == 0) {
      pcVar3 = (code *)FUN_010e98c8(&DAT_00387f91,0x14);
      return pcVar3;
    }
    if (uVar1 == 1) {
      if ((uVar11 & 1) == 0) {
        param_2[2] = 0;
        *param_2 = 1;
        param_2[3] = 0;
        param_2[1] = 0;
      }
      local_4c = (undefined4 ****)CONCAT31(local_4c._1_3_,uVar2);
      local_58 = (undefined4 ***)0x0;
      if (bVar8) {
        FUN_010e45d8(&local_38,iVar10);
        if (local_38 != (uint ****)&DAT_00000001) {
          uVar11 = 1;
          param_2[2] = (uint)local_30;
          param_2[3] = (uint)local_2c;
          goto LAB_010e1e84;
        }
        pcVar3 = local_34;
      }
      else {
        local_30 = (uint ***)&local_58;
        local_38 = (uint ****)&local_4c;
        local_2c = FUN_010e4a94;
        local_34 = FUN_010e4a94;
        FUN_00600d2c(appppuStack_44,&DAT_00583633,&local_38);
        pcVar3 = (code *)FUN_010e9978(appppuStack_44);
      }
      iVar10 = *(int *)(pcVar3 + 8);
      if (iVar10 == *(int *)pcVar3) {
        FUN_012d2740(pcVar3);
      }
      *(int *)(pcVar3 + 8) = iVar10 + 1;
      puVar5 = (undefined4 *)(*(int *)(pcVar3 + 4) + iVar10 * 0x10);
      *puVar5 = "ProtoTime";
      puVar5[1] = 9;
      puVar5[2] = "unix_millis";
      puVar5[3] = 0xb;
      return pcVar3;
    }
    pcVar3 = (code *)FUN_010e47f0(uVar2,uVar1,param_3,99);
    if (pcVar3 != (code *)0x0) {
      return pcVar3;
    }
  } while( true );
}

