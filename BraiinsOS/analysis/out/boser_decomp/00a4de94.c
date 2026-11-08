// FUN_00a4de94 @ 00a4de94 size=344 calls_out=6 calls_in=1
// strings: unknown HistoryWindow valueHistoryWindow must be specifiedno buffer configured for this windowevent open/boser/boser/src/web/grpc/persistent_graphs_service.rs:87

void FUN_00a4de94(int *param_1,int param_2)

{
  undefined1 auStack_138 [64];
  uint local_f8;
  undefined4 local_f4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e8f4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e8f4);
  }
  FUN_01bed4e2(auStack_138,param_2,0x48);
  FUN_01a68db4(auStack_138);
  FUN_0178e884(local_f4);
  if (4 < local_f8) {
    FUN_01a71aac(&local_a0,3,
                 "unknown HistoryWindow valueHistoryWindow must be specifiedno buffer configured for this windowevent open/boser/boser/src/web/grpc/persistent_graphs_service.rs:87"
                 ,0x1b);
    local_f8 = local_98;
    if (local_a0 != 3 || local_9c != 0) {
      param_1[1] = local_9c;
      param_1[2] = local_98;
      *param_1 = local_a0;
      param_1[3] = local_94;
      param_1[4] = iStack_90;
      param_1[5] = iStack_8c;
      param_1[6] = iStack_88;
      param_1[7] = iStack_84;
      param_1[8] = local_80;
      param_1[9] = iStack_7c;
      param_1[10] = iStack_78;
      param_1[0xb] = iStack_74;
      param_1[0xc] = iStack_70;
      param_1[0xd] = local_6c;
      param_1[0xe] = iStack_68;
      param_1[0xf] = iStack_64;
      param_1[0x10] = iStack_60;
      param_1[0x11] = iStack_5c;
      param_1[0x12] = local_58;
      param_1[0x13] = local_54;
      param_1[0x14] = local_50;
      param_1[0x15] = local_4c;
      param_1[0x16] = local_48;
      param_1[0x17] = iStack_44;
      param_1[0x18] = iStack_40;
      param_1[0x19] = iStack_3c;
      *(undefined1 *)(param_2 + 0x4c) = 1;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a4df24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a4df28 + *(int *)(&DAT_00a4df28 + local_f8 * 4)))();
  return;
}

